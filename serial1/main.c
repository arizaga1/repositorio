#include <main.h>
int16 variable;
char ch;
void main()
{
variable= 12500;
puts("**************************");

puts("    Hola Mundo             ");
puts("**************************");

//puerto serial 2
puts("**************************",PORT2);
puts("    Hola Mundo             ",PORT2);
puts("**************************",PORT2);
fprintf(PORT2,"este es el otro puerto  \n \r");


putc('\n'); // nueva l�nea
putc('\r'); // retorno de linea

fprintf(PORT1,"este es el valor de %Ld \n \r", variable);
printf("Escribir en el puerto serial");
   while(TRUE)
   {
ch = getc();  //recibimos por un puerto
  putc(ch,PORT2) ;   //enviamos por el puerto2
   }

}
