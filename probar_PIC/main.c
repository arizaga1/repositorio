#include <main.h>

void main()
{
      output_B(0xAA);
      output_D(0xAA);
   while(TRUE)
   {
   
      //Example blinking LED program
      output_low(LED);
      delay_ms(DELAY);
      output_high(LED);
      delay_ms(DELAY);

      //TODO: User Code
   }

}
