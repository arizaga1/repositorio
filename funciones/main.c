#include <main.h>

#include <LCD.C>
int j=0;
int g=4;
//char data[20][20] = {"Jan","Feb","Apr","May","Jun","Jul","Aug","Sep","Oct"};
char  nombres[5][6]={"juan", "pedro","jose","maria","diana"};

void main()
{
   lcd_init();

   while(TRUE)
   {
 
      
      for(j=0;j<5;j++)
      {
       
      printf(lcd_putc,"%s",nombres[j]);
      delay_ms(1000);
      printf(lcd_putc,"\f");
      
      
      }


      //TODO: User Code
   }

}
