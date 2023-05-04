import rclpy
from rclpy.node import Node
from head_controller.srv import Head , SerialNumber
import serial
import serial.tools.list_ports


class HeadService(Node):
    def __init__(self):
        super().__init__("head_service")
        self.min_distance_head = 0
        self.max_distance_head = 5
        self._port = None
        self._serial_number = None

        self.add_distance_service = self.create_service(
            Head,
            "add_distance",
            self.add_distance_callback
        )

        self.serial_number_service = self.create_service(
            SerialNumber,
            "get_serial_number",
            self.serial_number_callback
        )

 
# funcion para buscar por los puertos USB el numero de serie del sonar, si coincide el numero de serie obtiene el puerto donde se ubica, ademas en esta fucnion lo que realizara sera una busqueda continua del sistema.
 #  Se realiza para cuando hay una desconexion del USB y a continuacion conectamos de nuevo pueda volver a funcionar sin que tengamos que levantar el servicio de nuevo. 
 # La busqueda se realiza de manera constante cuando no se encuentra el dispositivo con el numero de serie.
 


    def serial_number_callback(self, request, response):
        self._serial_number = request.serial_number
        response.success = self.connect_to_serial_port()
        return response

    def connect_to_serial_port(self):
        ports = list(serial.tools.list_ports.comports())
        for p in ports:
            if p.serial_number == self._serial_number:
                self._port = serial.Serial(p.device, 9600)
                self.get_logger().info(f"Connected to {p.description}")
                return True
        self.get_logger().warn("Could not find a device with the specified serial number")
        return False

# funcion para el cabezal , una vez concetado realiza la escritura de la cantidad del desplazamiento si es posbile dentro de los limites.
# Si no es posible no se realizara ningun movimiento como modo de precaucion.  
# La direccion se determina con los simbolos a priori con "+" y "-" (pueden cambiarse).

    def add_distance_callback(self, request, response):
        # Si se ha conectado al dispositivo, enviar el comando y actualizar los valores de distancia
        if self._port:
            
            if request.simbol == "+":
                if request.distance <= self.max_distance_head:
                    response.movement = request.distance
                    self.max_distance_head -= request.distance
                    self.min_distance_head += request.distance
                    response.movemax = self.max_distance_head
                    response.movemin = self.min_distance_head
                    response.success = True
                    self._port.write(str(request.distance).encode())
                else:
                    response.success = False
            elif request.simbol == "-":
                if request.distance <= self.min_distance_head:
                    response.movement = request.distance
                    self.max_distance_head += request.distance
                    self.min_distance_head -= request.distance
                    response.movemax = self.max_distance_head
                    response.movemin = self.min_distance_head
                    response.success = True
                    self._port.write(str(-request.distance).encode())
                else:
                    response.success = False
            else:
                response.success = False
                response.movement = 0
                response.movemax = self.max_distance_head
                response.movemin = self.min_distance_head

        return response


def main(args=None):
    rclpy.init(args=args)
    head_service = HeadService()
    rclpy.spin(head_service)
    head_service.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
