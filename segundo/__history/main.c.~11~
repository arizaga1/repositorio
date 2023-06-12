#include <main.h>

#include <LCD.C>
int  i;
void main()
{
   lcd_init();
   lcd_putc("Ejemplo LCD \n");
   delay_ms(5000);
   lcd_putc("\f");
   lcd_putc("Hola Mundo \n");
   
   while(TRUE)  //ciclo infinito
   {
      for(i=0;i<10;i++)
        { 
        lcd_gotoxy(3, 2);
        printf(lcd_putc,"contador: %d ",i);
          delay_ms(1000);
        }
        
      #ASM
      NOP
      #ENDASM//no hacer nada
      //TODO: User Code
   }

}
