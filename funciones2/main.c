#include <main.h>

#include <LCD.C>
int g = 4;
int i=0;

char x="3";
char  nombres[5][6]={"juan", "pedro","jose","maria","diana"};
void main()
{
   lcd_init();

   while(TRUE) //ciclo
   {
 
     
   for(i=0;i<5;i++)
   {
      printf(lcd_putc,"\f");
      printf(lcd_putc,"%d",nombres[0][i]);
      delay_ms(1000);  
   }

      
   }

}
