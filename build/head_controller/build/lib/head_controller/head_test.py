import sys
import rclpy
from rclpy.node import Node
from custom_interfaces.srv  import Head

class MoveHeadAsync(Node):
    def __init__(self):
        super().__init__("move_client_async")
        self.client=self.create_client(Head,"add_distance")
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not avaliable,waiting again....")
        
    def send_request(self):
        request = Head.Request()
        request.simbol= str(sys.argv[1])
        request.distance= float(sys.argv[2])
        self.future=self.client.call_async(request)



def main(args=None):
    rclpy.init(args=args)
    move_client= MoveHeadAsync()
    move_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(move_client)
        if move_client.future.done():
            try:
                response= move_client.future.result()
            except Exception as e:
                move_client.get_logger().info(
                    f"Service call failes {e}"
                )
            else:
                move_client.get_logger().info(
                    f"Result of distance {response.movement}"
                )
                move_client.get_logger().info(
                    f"Result of distancemax {response.movemax}"
                )
                move_client.get_logger().info(
                    f"Result of distancemin {response.movemin}"
                )
            break
        move_client.destroy_node()
        rclpy.shutdown()

if __name__=="__main__":
    main()