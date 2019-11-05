#include<Ethernet.h>
#include<SPI.h>

byte macAddr[] = {0xAB 0xCD 0xEF 0xFE 0xAC 0xFG };//ejemplo
IpAddress ip(192.168.6.100);
EthernetServer servidor(80);

void setup(){
    Ethernet.begin(macAddr, ip);
    servidor.begin();
}

void loop(){
    EthernetClient cliente = servidor.available();
    if(cliente){
        boolean lineaEnBlanco = true;
        while(cliente.connected){
            if(cliente.available()){
                char c = cliente.read();
                if(c == '\n' && lineaEnBlanco){
                    cliente.println("HTTP/1.1 200 OK");
                    cliente.println(Content-Type: text/html);
                    cliente.println(connection: close);
                    cliente.println();
                    cliente.println("<html>");
                    cliente.println("<body>");
                    cliente.println("<h1> Esta pagina viene de un arduino </h1>");
                    cliente.println("</body>");
                    cliente.println("</html>");
                    break;
                }
                if(c == '\n'){
                    lineaEnBlanco = true;
                }else{
                    if(c != '\r'){
                        lineaEnBlanco = false;
                    }
                }
            }
        }
        delay(1);
        cliente.stop;
    }
}