#include <main.h>
//incluyo esta linea de código
#include <LCD.C>
float  x;  //el resultado del convertidor
void main()
{
   setup_adc_ports(AN0);  //En esta línea se configura el ADC
   setup_adc(ADC_CLOCK_DIV_64);     //la velociad de conversión
   lcd_init();                      //se configura la pantalla LCD

   while(TRUE)
   {
   delay_ms(50);
   x=read_adc()* 5.0/1023;
   lcd_gotoxy(1,1);
   printf(LCD_PUTC, " \r voltaje=%f ",x);



      //TODO: User Code
   }

}
