#include <16F887.h>
#device ADC=10
#use delay(crystal=20000000)
//configuraci�n del puerto serial
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)

