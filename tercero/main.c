#include <main.h>
int8 cuenta=76;
int8 segundos;
#INT_RTCC   //interrupcion por Tmr0 
void  RTCC_isr(void) //RSI Rutina de Servicio a la Interrupción  
                     //ISR Interrupt Service Routin
{
cuenta--;
set_timer0(2);//cargando un valor al tmr0
if (cuenta == 0){
cuenta=76; 

segundos++;


}

}
 
#include <lcd.c>

void main()
{
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_256|RTCC_8_BIT);      //13.1 ms overflow
  SET_RTCC(2);
   
   enable_interrupts(INT_TIMER0); //habilitar interrupcion de timer0
   enable_interrupts(GLOBAL); //habilitacion general de las interrupc

   lcd_init();

   while(TRUE)
   {
   
   lcd_gotoxy(3, 2);
printf(lcd_putc, "seg:=%u",segundos%60);
   
      //TODO: User Code
   }

}
