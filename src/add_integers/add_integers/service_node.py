import rclpy
from rclpy.node import Node
from head_controller.srv import Head

class HeadServicie(Node):
    def __init__(self):
        super().__init__("add_int_service")
        self.min_distnace_head= 0 
        self.max_distance_head = 5 #limite superior e inferior, si se añade un sensor añadir una entrada mas al servicio
        self.service=self.create_service(
            Head,
            "add_distance",
            self.add_distance_callback
        )
    # Se le ha añadido los simbolos + y- porque al introducir los negativos por terminal en nodo ejemplo daban error
    def add_distance_callback(self,request,response):
        if request.simbol == "+":
            if request.distance <= self.max_distance_head:
                response.movement= request.distance
                self.max_distance_head = self.max_distance_head - request.distance
                self.min_distnace_head=self.min_distnace_head + request.distance
                response.movemax = self.max_distance_head
                response.movemin=self.min_distnace_head
                response.success=True
        
        elif request.simbol == "-":
            if request.distance <= self.min_distnace_head:
                response.movement= request.distance
                self.max_distance_head = self.max_distance_head + request.distance
                self.min_distnace_head=self.min_distnace_head - request.distance
                response.movemax = self.max_distance_head 
                response.movemin=self.min_distnace_head
                response.success=True
        else:
            response.success=False
            response.movement=0
            response.movemax = self.max_distance_head 
            response.movemin = self.min_distnace_head    
        
        return response

def main(args=None):
    rclpy.init(args=args)
    move_service= HeadServicie()
    rclpy.spin(move_service)
    rclpy.shutdown()
if __name__=="__main__":
    main()