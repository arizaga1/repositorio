#include <18F4550.h>
#device ADC=10

#FUSES NOWDT                    //No Watch Dog Timer

#use delay(internal=4MHz)
#define jjj   PIN_A0

#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)

