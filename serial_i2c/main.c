#include <main.h>
BYTE direccion;    
Byte segundos,minutos,horas;   //Variables para recibir la informaci�n de los minutos segundos y horas

void funcion1();   //declaracion de una funcion

void main()
{
direccion=0xD0;  //  direcci�n 1101  000  bit de escrituta 0 
   setup_adc_ports(NO_ANALOGS, VSS_VDD);
     

   while(TRUE)
   {


funcion1();  //llamada a la funci�n


delay_ms(1000);

if(minutos==0x49 && horas==0x16)
   {printf("Suena alarma");}
      //TODO: User Code
   }

}



//un programa modular

void funcion1()
{
i2c_start();       // Issues a start command when in
i2c_write(0xD0);   // Sends a single byte over the I2C interface.
i2c_write(0x00);  // Sends a 0x00 .
i2c_start();
i2c_write(0xD0|0x01);
segundos=i2c_read(1);
minutos=i2c_read(1);
horas=i2c_read(0);
i2c_stop();    
printf("\r");
printf("%x: %x :%x ",horas,minutos,segundos);

}
