#include <main.h>

void main()
{
	setup_timer_2(T2_DIV_BY_16,155,1);		//499 us overflow, 499 us interrupt

	setup_ccp1(CCP_PWM);
	setup_ccp2(CCP_PWM);
	set_pwm1_duty((int16)62);
	set_pwm2_duty((int16)312);

	while(TRUE)
	{


		//TODO: User Code
	}

}
