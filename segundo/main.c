
#include <16F877A.h>
#use delay(crystal=20000000)
#include <LCD.C>  //Biblioteca (Library)
unsigned int16  j;  //variable entera
void main()
{
   lcd_init();   //inicializar la pantalla LCD
   lcd_putc("Ejemplo LCD \n");
   delay_ms(500);
   lcd_putc("\f");
   lcd_putc("Hola Mundo \n");
   j=250;
   while(TRUE)  //ciclo infinito
   {
      //for(i=0;i<10;i++)
        //{ 
        lcd_gotoxy(3, 5);
        printf(lcd_putc,"contador: %Lu ",j++);//imprimir a pantalla
        
        
          delay_ms(1000); 
        
        
      #ASM  //Aqu� se inicia el uso de lenguaje ensamblador
      NOP
      #ENDASM//no hacer nada
      //Aqu� se termina el uso de lenguaje ensamblador
      //TODO: User Code
   }

}
