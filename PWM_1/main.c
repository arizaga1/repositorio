#include <main.h>
//PWM  Modulación por ancho de Pulso
//se utiliza para control de velocidad 
//de motores de CD
void main()
{
   setup_timer_2(T2_DIV_BY_16,249,1);      //1.0 ms overflow, 1.0 ms interrupt

   setup_ccp1(CCP_PWM);
   set_pwm1_duty((int16)250);

   while(TRUE)
   {
set_pwm1_duty((int16)0);
delay_ms(1500);

set_pwm1_duty((int16)200);
delay_ms(1500);

set_pwm1_duty((int16)350);
delay_ms(1500);

set_pwm1_duty((int16)500);
delay_ms(1500);

set_pwm1_duty((int16)750);
delay_ms(1500);


set_pwm1_duty((int16)1000);
delay_ms(200);
      //TODO: User Code
   }

}
