import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan
from kmj_msg_srv_action_interface.srv import ObstacleState

# UI
from .turtle_move_ui import Ui_Form

class Detect_turtle(Node):
  def __init__(self):
    super().__init__('detect_turtle')   # 노드 이름을 detect_turtle로 등록
    self.stop_distance = 0.5            # 장애물로 판단할 최소 거리
    self.scan_ranges = []               # LaserScan 거리값 배열 저장용
    self.has_scan_received = False      # 아직 scan 데이터를 받았는지 여부 확인용 플래그
    self.qos_profile = QoSProfile(depth = 10)
    self.scan_sub = self.create_subscription(
      LaserScan,
      'scan',   # scan topic 구독
      self.scan_callback,
      qos_profile=qos_profile_sensor_data)    # 센서이므로 qos_profile_sensor_data 사용

    self.timer = self.create_timer(0.1, self.timer_callback)  # 0.1초마다 장애물 체크
    self.cmd_vel_pub = self.create_publisher(Twist, 'cmd_vel', self.qos_profile)  # 터틀봇 이동 명령 퍼블리셔

    # detect 전달을 위한 클라이언트 생성
    # Service Client
    self.detect_client = self.create_client(ObstacleState, 'obstacle_state')

  def scan_callback(self, msg):   # / scan 메시지를 받을 때마다 호출된다.
    self.scan_ranges = msg.ranges # 레이다 거리 배열 저장
    self.has_scan_received = True # 이제 scan 데이터를 받았다고 표시

  def timer_callback(self):
      twist = Twist()
      # twist.linear.x = 0.1
      if not self.has_scan_received:
          return
      left_range = int(len(self.scan_ranges) / 4)
      right_range = int(len(self.scan_ranges) * 3 / 4)
      left_min = min(self.scan_ranges[0:left_range])
      right_min = min(self.scan_ranges[right_range:360])
      obstacle_distance = min(left_min,right_min)

      obstacle_now = obstacle_distance < self.stop_distance

      if obstacle_distance < self.stop_distance:
          request = ObstacleState.Request()
          request.obstacle = obstacle_now
          self.detect_client.call_async(request)
          self.get_logger().info('접촉!!!!!!!!!')

def main(args=None):
  rclpy.init(args=args)
  node = Detect_turtle()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main':
  main()
