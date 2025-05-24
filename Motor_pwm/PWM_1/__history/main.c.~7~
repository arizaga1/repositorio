#include <main.h> //se agrregan funciones o variables a programas
#include <math.h> //se agregan funciones matemáticas 
//PWM  Modulación por ancho de Pulso
//se utiliza para control de velocidad 
//de motores de CD
float contador=0; 
void main()
{
   set_tris_a(0x02); 
   //para colocar los pines del puerto A como entrada (1) o salida (0)
   //0x02 =b'00000010  pone en 1 lógico el pin A1 
   //por lo tanto será de entrada
    setup_timer_2(T2_DIV_BY_16,249,1);      //1.0 ms overflow, 1.0 ms interrupt

   setup_ccp1(CCP_PWM);
   set_pwm1_duty((int16)0); 
 
 

 

  while(TRUE)
   {

 If(input(PIN_A1)) //botón de entrada para cambiar el ancho
 //de pulso del PWM 
 {
      contador=contador+1; 
      set_pwm1_duty((int16)contador*100);
      delay_ms(200); //delay agregado para evitar rebotes
      //TODO: User Code
   }
   
   }

}
