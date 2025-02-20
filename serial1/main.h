#include <16F887.h>
#device ADC=10
#use delay(crystal=20000000)
//configuración del puerto serial
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)
#use rs232(baud=115200,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8,stream=PORT2)

//informacion
//https://www.microlink.co.uk/rs232.html
//http://wearcam.org/seatsale/programs/www.beyondlogic.org/serial/serial.htm
