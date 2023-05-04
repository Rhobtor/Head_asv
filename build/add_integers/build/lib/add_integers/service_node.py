import rclpy
from rclpy.node import Node
from head_controller.srv import Head , SerialNumber
import serial
import serial.tools.list_ports
import threading
import usb.core
import usb.util
import time
import pyudev

class HeadService(Node):
    def __init__(self):
        super().__init__("head_service")
        self.min_distance_head = 0
        self.max_distance_head = 5
        self._port = None
        self._serial_number = None
        self.remembered_port = None
        self.ping_device = None
        self.ping_thread = None
        self._puerto_serial = None
        self.connected = False
        self.cont = pyudev.Context()
        self.monitor = None
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
        self.port_monitor_thread = threading.Thread(target=self.monitor_usb_port, daemon=True)
        self.port_monitor_thread.start()
        response.success = self.connected
        return response

    # def connect_to_serial_port(self):
    #     ports = list(serial.tools.list_ports.comports())
    #     for p in ports:
    #         if p.serial_number == self._serial_number:
    #             self._port = serial.Serial(p.device, 9600)
    #             self.get_logger().info(f"Connected to {p.description}")
    #             return True
    #     self.get_logger().warn("Could not find a device with the specified serial number")
    #     return False
    def monitor_usb_port(self):
        while True:
            sonar_ports = [
                p.device
                for p in serial.tools.list_ports.comports()
                if p.serial_number == self._serial_number # Numero de serie del sonar, cambiar con el que se este utilizando
            ]
            if self.remembered_port not in sonar_ports:
                self.get_logger().info("USB device disconnected")
                self.ping_device = None
                self.remembered_port = None
                
            

            if not self.ping_device:
                for port in sonar_ports:
                    try:
                        ser = serial.Serial(port, 115200)
                        self.ping_device = ser
                        self.remembered_port = port
                        self.get_logger().info(f"Connected to {port}")
                        self.connected=True
                        break
                    except Exception as e:
                        self.get_logger().info(f"Failed to connect to {port}: {e}")
            rclpy.spin_once(self, timeout_sec=0.5)


# funcion para el cabezal , una vez concetado realiza la escritura de la cantidad del desplazamiento si es posbile dentro de los limites.
# Si no es posible no se realizara ningun movimiento como modo de precaucion.  
# La direccion se determina con los simbolos a priori con "+" y "-" (pueden cambiarse).

    def add_distance_callback(self, request, response):
        # Si se ha conectado al dispositivo, enviar el comando y actualizar los valores de distancia
        if self.ping_device:
            
            if request.simbol == "+":
                if request.distance <= self.max_distance_head:
                    response.movement = request.distance
                    self.max_distance_head -= request.distance
                    self.min_distance_head += request.distance
                    response.movemax = self.max_distance_head
                    response.movemin = self.min_distance_head
                    response.success = True
                    self.ping_device.write(str(request.distance).encode())
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
                    self.ping_device.write(str(-request.distance).encode())
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
