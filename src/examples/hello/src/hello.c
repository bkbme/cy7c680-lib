#include "cy7c680.h"
 
void main()
{
  //Full speed ahead (48MHz)
  CPUCS = (1<<CLKSPD1);

  while(1) {
    DDRA = 0xff;
    while(1) {
      PORTA_1 = 1;
      PORTA_1 = 0;
    }
  }
}
