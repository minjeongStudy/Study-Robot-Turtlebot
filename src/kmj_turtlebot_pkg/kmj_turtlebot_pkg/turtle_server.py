import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
from kmj_msg_srv_action_interface.srv import ObstacleState
from rclpy.action import ActionServer
from rclpy.action import ActionClient
from kmj_msg_srv_action_interface.action import Move

class TurtleServer(Node):
    def __init__(self):
        super().__init__('turtle_server_client')

        # -------------------------
        # 현재 장애물 상태 저장 변수
        # True  = 장애물 있음
        # False = 장애물 없음
        # -------------------------
        self.obstacle_state = False

        self.obstacle_service = self.create_service(
                ObstacleState,
                'obstacle_state',
                self.obstacle_callback
            )

        # Service Client
        self.action_client = ActionClient(self, Move, 'action_turtle')

    def obstacle_callback(self, request, response):

        self.obstacle_state = request.obstacle
        self.get_logger().info('Received obstacle state: {0}'.format(self.obstacle_state))

        # 응답 보내기
        if self.obstacle_state == True :
            response.success = True

            goal_msg = Move.Goal()
            goal_msg.obstacle = True

            self.action_client.wait_for_server()
            self.action_client.send_goal_async(goal_msg)

        else :
            response.success = False

        return response

def main(args=None):
    rclpy.init(args=args)

    node = TurtleServer()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
