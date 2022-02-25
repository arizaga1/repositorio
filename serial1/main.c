#include <main.h>
int16 variable;
char ch;
void main()
{
variable= 12500;
puts("**************************");

puts("    Hola Mundo             ");
puts("**************************");

putc('\n'); // nueva línea
putc('\r'); // retorno de linea

printf("este es el valor de %Ld \n \r", variable);
printf("Escribir en el puerto serial");
   while(TRUE)
   {
ch = getc();

  putc(ch) ;   //TODO: User Code
   }

}
