import sys
import rclpy
from PySide6.QtWidgets import QApplication, QMainWindow
from PySide6.QtCore import QFile
from .turtle_move_ui import Ui_Form
from geometry_msgs.msg import Twist
from PySide6.QtCore import QThread, Signal, Slot
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import String
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan
from kmj_msg_srv_action_interface.srv import ObstacleState
from rclpy.action import ActionServer
from kmj_msg_srv_action_interface.action import Move
from nav_msgs.msg import Odometry
import math

# QoS 설정용
from rclpy.qos import QoSProfile

class RclpyThread(QThread):
    def __init__(self, executor):
        super().__init__()
        self.executor = executor

    def run(self):
        try:
            self.executor.spin()
        finally:
            rclpy.shutdown()

class Move_turtle(Node):
  def __init__(self, ui_handle):
    super().__init__('move_turtle')
    self.qos_profile = QoSProfile(depth = 10)
    self.move_turtle = self.create_publisher(Twist, '/cmd_vel', self.qos_profile)
    self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
    self.timer = self.create_timer(0.1, self.turtle_move)

    self.is_obstacle = False
    self.is_manual = False

    # UI
    self.main_ui = ui_handle.ui

    self.main_ui.btn_return.setEnabled(False)

    # 네모 그리기 변수
    self.is_square_mode = False
    self.step = 0
    self.current_x = 0.0
    self.current_y = 0.0
    self.current_yaw = 0.0
    self.start_x = 0.0
    self.start_y = 0.0
    self.start_yaw = 0.0

    self._action_server = ActionServer(
              self,
              Move,             # Action 타입
              'action_turtle',  # 액션 이름
              self.obstacle_callback
          )

  def odom_callback(self, msg):
    self.current_x = msg.pose.pose.position.x
    self.current_y = msg.pose.pose.position.y

    # 쿼터니언을 오일러 각도(Yaw)로 변환
    q = msg.pose.pose.orientation
    siny_cosp = 2 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z)
    self.current_yaw = math.atan2(siny_cosp, cosy_cosp)

  def start_square(self):
    # 네모 그리기 시작 명령
    self.is_square_mode = True
    self.step = 0
    self.reset_reference()
    self.main_ui.listWidget.addItem("■ 네모 그리기를 시작합니다.")

  def reset_reference(self):
    # 각 단계 시작 시 기준 위치/각도 저장
    self.start_x = self.current_x
    self.start_y = self.current_y
    self.start_yaw = self.current_yaw

  def turtle_move(self):
        # 0.1초마다 실행되는 메인 루프
        if self.is_square_mode:
            # 네모 그리기 모드일 때는 전용 로직 실행
            self.process_square()
        else:
            # 평상시에는 기존의 장애물/수동 조종 로직 실행
            self.normal_drive()

  def normal_drive(self):
        msg = Twist()
        # 1. 장애물이 있고 수동 모드가 아닐 때 -> 정지
        if self.is_obstacle and not self.is_manual:
            msg.linear.x = 0.0
            msg.angular.z = 0.0
        else:
            # 2. 장애물이 없거나 수동 조작 중이면 GUI에서 설정한 속도로 주행
            msg.linear.x = self.velocity
            msg.angular.z = self.angular

        self.move_turtle.publish(msg)

  def process_square(self):
        msg = Twist()
        full_dist = 1.8   # 3, 4, 5번 (긴 변)
        half_dist = full_dist / 2   # 1, 6번 (짧은 변)

        if self.step == 0:
            dist = math.sqrt((self.current_x - self.start_x)**2 + (self.current_y - self.start_y)**2)
            if dist < 0.4:
                msg.linear.x = -0.1
            else:
                self.next_step("후진 완료!")

        # [회전 단계: 1, 3, 5, 7, 9]
        elif self.step % 2 != 0:
            angle_diff = abs(self.current_yaw - self.start_yaw)
            if angle_diff < 1.55:   # 1.48로 하니까 터틀봇이 튄다.
                msg.angular.z = -0.3 if self.step == 1 else 0.3
            else:
                current_move = (self.step // 2) + 1
                # 6번 직진 전 마지막 회전(Step 9) 완료 시 로그
                if self.step == 9:
                    self.next_step("마지막 회전 완료!")
                else:
                    self.next_step(f"회전 완료! 직진 시작")

        # [직진 단계: 2, 4, 6, 8, 10]
        elif self.step % 2 == 0:
            dist = math.sqrt((self.current_x - self.start_x)**2 + (self.current_y - self.start_y)**2)

            # 거리 할당 로직
            if self.step == 2 or self.step == 10:
                target_dist = half_dist
            else:
                target_dist = full_dist

            if dist < target_dist:
                msg.linear.x = 0.1
            else:
                # 마지막 Step 10 완료 시 즉시 종료
                if self.step == 10:
                    self.is_square_mode = False
                    self.is_manual = True
                    self.is_obstacle = False

                    self.main_ui.listWidget.addItem("■ 네모 그리기를 완료했습니다!")

                    return # 더 이상 publish하지 않고 함수 탈출
                else:
                    self.next_step(f"동작 완료! 다음 회전 시작")

        self.move_turtle.publish(msg)

  def next_step(self, log_msg):
        # 중복 코드를 줄이기 위한 단계 전환 함수
        self.step += 1
        self.reset_reference()

  def obstacle_callback(self, goal_handle):
    obstacle = goal_handle.request.obstacle

    if obstacle:
        self.is_obstacle = True
        self.velocity = 0.0
        self.angular = 0.0

        # GUI에 표시
        self.main_ui.listWidget.addItem("@@ 터틀봇이 장애물을 만났습니다!!! \n 터틀봇을 직접 이동하거나 RETURN 버튼을 통해 이동하세요.")
        self.main_ui.btn_return.setEnabled(True)
    else:
        self.is_obstacle = False

    goal_handle.succeed()
    result = Move.Result()
    result.success = True

    return result

class MainWindow(QMainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()

        self.ui = Ui_Form()
        # setupUi 함수를 호출해 MainWindow에 있는 위젯을 배치한다.
        self.ui.setupUi(self)
        # button clicked 이벤트 핸들러로 button_clicked 함수와 연결한다.
        self.ui.btn_go.clicked.connect(self.btn_go_clicked)
        self.ui.btn_back.clicked.connect(self.btn_back_clicked)
        self.ui.btn_right.clicked.connect(self.btn_right_clicked)
        self.ui.btn_left.clicked.connect(self.btn_left_clicked)
        self.ui.btn_stop.clicked.connect(self.btn_stop_clicked)
        self.ui.btn_return.clicked.connect(self.btn_return_clicked)

		#ros 실행
        rclpy.init()
        #쓰레드 선언
        self.executor = MultiThreadedExecutor()
        self.rclpy_thread = RclpyThread(self.executor)
        #기존의 cmd_vel 발행하는 클래스 사용
        self.pub_move = Move_turtle(self)

        #버튼을 눌렀을 때 속도 변화해주기 위해 인스턴스 변수 선언
        self.pub_move.velocity = 0.0
        self.pub_move.angular = 0.0
        self.rclpy_thread.start()

        #만들어진 쓰레드에 노드 publish 노드 추가
        self.executor.add_node(self.pub_move)

        self.pub_move.move_turtle

    def btn_stop_clicked(self):
        self.pub_move.velocity = 0.0
        self.pub_move.angular = 0.0
        self.pub_move.is_manual = True
        self.is_obstacle = False

    def btn_go_clicked(self):
        self.pub_move.is_manual = True
        self.is_obstacle = False
        self.pub_move.velocity += 0.2

    def btn_back_clicked(self):
        self.pub_move.is_manual = True
        self.is_obstacle = False
        self.pub_move.velocity -= 0.2

    def btn_right_clicked(self):
        self.pub_move.is_manual = True
        self.is_obstacle = False
        self.pub_move.angular -= 0.2

    def btn_left_clicked(self):
        self.pub_move.is_manual = True
        self.is_obstacle = False
        self.pub_move.angular += 0.2

    def btn_return_clicked(self):
        self.pub_move.start_square() # 노드의 네모 모드 켜기

    def ros_executer(self):
        self.executor.spin()

    def closeEvent(self, event):
        # 종료 시 리소스 정리
        self.executor.shutdown()
        self.rclpy_thread.quit()
        self.rclpy_thread.wait()
        super().closeEvent(event)

def main(args=None):
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()

    try:
        sys.exit(app.exec())
    except KeyboardInterrupt:
        pass

if __name__ == "__main__":
    main()
