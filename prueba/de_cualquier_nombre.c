#include <de_cualquier_nombre.h>

#include <float.h>
#include <math.h>

void main()
{
   setup_adc_ports(NO_ANALOGS, VSS_VDD);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1|RTCC_8_BIT);      //256 us overflow


   while(TRUE)
   {
//  ESto es un comentario

      //TODO: User Code
   }

}
