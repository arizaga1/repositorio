#include <16F877A.h>
#device ADC=10
#use delay(crystal=16MHz)
#use FIXED_IO( A_outputs=PIN_A5,PIN_A0 )

#define LED PIN_A5
#define DELAY 1000


