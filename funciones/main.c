#include <main.h>

#include <LCD.C>
#INCLUDE <stdlib.h>


int j=0;
int g=4;
//char data[20][20] = {"Jan","Feb","Apr","May","Jun","Jul","Aug","Sep","Oct"};
char  nombres[5][6]={"juan", "pedro","jose","maria","diana"};
//declaramos una funcion que devuelva un entero (int)
int mi_funcion(int x);//<-- x es un parametro de la funcion


void main()
{
   lcd_init();

   while(TRUE)
   {
 
      
      for(j=0;j<5;j++)
      {
      // g=rand();  //rand genera un numero pseudo aleatorio
         g=mi_funcion(6);
      printf(lcd_putc,"%s",nombres[g]);
      delay_ms(1000);
      printf(lcd_putc,"\f");
      
      
      }
      //printf(lcd_putc,"\f");

      //TODO: User Code
   }

}

//programamos la funcion
int mi_funcion(int x)
{

return rand()%x;
}
