
import sys
import rclpy
from rclpy.node import Node
from head_controller.srv import Head, SerialNumber

#Script para realizar una peticion al servicio por terminal , le introduce al servicio el numero de serie, el sentido del desplazamiento
# y el desplazamineto en cantidad numerica
class MoveHeadAsync(Node):
    def __init__(self):
        super().__init__("move_client_async")
        self.head_client = self.create_client(Head, "add_distance")
        self.serial_number_client = self.create_client(SerialNumber, "get_serial_number")
        
        while not self.head_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service 'add_distance' not available, waiting again...")
        while not self.serial_number_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service 'get_serial_number' not available, waiting again...")
    
# Funcion para el request del servicio    
    def send_request(self):
        request_serial = SerialNumber.Request()
        request_serial.serial_number = str(sys.argv[1])
        future_serial = self.serial_number_client.call_async(request_serial)
        self.get_logger().info("Sent request to Serial service")
        
        request_head = Head.Request()
        request_head.simbol = str(sys.argv[2])
        request_head.distance = float(sys.argv[3])
        future_head = self.head_client.call_async(request_head)
        self.get_logger().info("Sent request to Head service")
        
        while rclpy.ok():
            rclpy.spin_once(self)
            if future_serial.done() and future_head.done():
                try:
                    response_serial = future_serial.result()
                    response_head = future_head.result()
                except Exception as e:
                    self.get_logger().info(f"Service call failed: {e}")
                else:
                    self.get_logger().info(f"Serial service result: {response_serial.success}")
                    self.get_logger().info(f"Head service result - success: {response_head.success}")
                    self.get_logger().info(f"Head service result - movement: {response_head.movement}")
                    self.get_logger().info(f"Head service result - max_movement: {response_head.movemax}")
                    self.get_logger().info(f"Head service result - min_movement: {response_head.movemin}")
                break

        self.destroy_node()
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    move_client = MoveHeadAsync()
    move_client.send_request()

if __name__ == "__main__":
    main()
