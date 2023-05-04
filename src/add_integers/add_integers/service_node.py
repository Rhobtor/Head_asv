import rclpy
from rclpy.node import Node
from head_controller.srv import Head
import warnings
import serial
import serial.tools.list_ports
import threading
class HeadServicie(Node):
    def __init__(self):
        super().__init__("add_int_service")
        self.min_distnace_head= 0 
        self.max_distance_head = 5 #limite superior e inferior (se pueden modificar segun las necesidades), si se añade un sensor añadir una entrada mas al servicio
        self.remembered_port = None
        self.ping_device = None
        self.ping_thread = None
        self._puerto_serial = None
        self.service=self.create_service(
            Head,
            "add_distance",
            self.add_distance_callback
        )
        self.port_monitor_thread = threading.Thread(target=self.monitor_usb_port, daemon=True)
        self.port_monitor_thread.start()
        
 
# funcion para buscar por los puertos USB el numero de serie del sonar, si coincide el numero de serie obtiene el puerto donde se ubica, ademas en esta fucnion lo que realizara sera una busqueda continua del sistema.
 #  Se realiza para cuando hay una desconexion del USB y a continuacion conectamos de nuevo pueda volver a funcionar sin que tengamos que levantar el servicio de nuevo. 
 # La busqueda se realiza de manera constante cuando no se encuentra el dispositivo con el numero de serie.
   
        
    def monitor_usb_port(self):
        while True:
            arduino_ports = [
                p.device
                for p in serial.tools.list_ports.comports()
                if p.serial_number == "55736313338351E04022" #Numero de serie del sonar, cambiar con el que se este utilizando
            ]
            if self.remembered_port not in arduino_ports:
                self.get_logger().info("USB device disconnected")
                self.ping_device = None
                self.remembered_port = None

            if not self.ping_device:
                for port in arduino_ports:
                    try:
                        ser = serial.Serial(port, 115200) #Nos concetamos al puerto
                        self.ping_device = ser
                        self.remembered_port = port
                        self.get_logger().info(f"Connected to {port}")
                        break
                    except Exception as e:
                        self.get_logger().info(f"Failed to connect to {port}: {e}")
            rclpy.spin_once(self, timeout_sec=0.5)


# funcion para el cabezal , una vez concetado realiza la escritura de la cantidad del desplazamiento si es posbile dentro de los limites.
# Si no es posible no se realizara ningun movimiento como modo de precaucion.  
# La direccion se determina con los simbolos a priori con "+" y "-" (pueden cambiarse).

    def add_distance_callback(self,request,response):
        if self.ping_device:                                                                #Si estamos concetados seguimos
            if request.simbol == "+":                                                       
                if request.distance <= self.max_distance_head:                              #Si no se ha llegado al maximo desplazamiento en una direccion
                    response.movement= request.distance                                     #Actualizamos la respuesta del servicio con la distancia introducida
                    self.max_distance_head = self.max_distance_head - request.distance      #Actualizamos los maximos desplazamiento a ambos lados
                    self.min_distnace_head=self.min_distnace_head + request.distance
                    response.movemax = self.max_distance_head
                    response.movemin=self.min_distnace_head
                    response.success=True                                                   #Confirmamos la respuesta del desplazamiento
                    self.ping_device.write(b'request.distance')                             #Escribimos en el arduino la cantidad movima
            
            elif request.simbol == "-":                                                     #Realizamos los mismo pero en la otra direccion
                if request.distance <= self.min_distnace_head:
                    response.movement= request.distance
                    self.max_distance_head = self.max_distance_head + request.distance
                    self.min_distnace_head=self.min_distnace_head - request.distance
                    response.movemax = self.max_distance_head 
                    response.movemin=self.min_distnace_head
                    response.success=True
                    self.ping_device.write(b'request.distance')
            else:                                                                           #Si no se le introduce un signo(sentido de desplazamiento) el cabezal no se movera
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