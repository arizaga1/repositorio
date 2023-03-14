#include <main.h>
int  TEMP = 0xff;
#include <LCD.C>
float  x;  //el resultado del convertidor
void main()
{
   setup_adc_ports(AN0_VREF_VREF);  //En esta l�nea se configura el ADC
   setup_adc(ADC_CLOCK_DIV_64);     //la velociad de conversi�n
   lcd_init();                      //se configura la pantalla LCD
   TEMP |= 0x0f;
   while(TRUE)
   {
   delay_ms(50);
   x=read_adc()* 1.0/1023;
   lcd_gotoxy(1,1);
   printf(LCD_PUTC, " \r Valor=%f ",(x*100)-50);



      //TODO: User Code
   }

}
