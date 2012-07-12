#include "cy7c680.h"
 
void main()
{
  //Full speed ahead (48MHz)
  CPUCS = (1<<CLKSPD1);

  DDRA = 0xff;
  while(1) {
    PORTA_0 = 1;
    PORTA_0 = 0;
  }
}
