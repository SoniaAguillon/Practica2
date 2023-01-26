#include "lib/include.h"


 extern void Delay (void)
 {
    unsigned long volatile time;
    time=1600000;
    while(time)
    {
        time--;
    }
 }
extern void GPIO_Init(void)
{
  
      
    
      GPIOE->DIR &= ~0x03;   // inputs on PE1-0

      GPIOE->DEN |= 0x03;    // enable digital on PE1-0

      GPIOB->DIR |= 0x3F;    // outputs on PB5-0

      GPIOB->DEN |= 0x3F;    // enable digital on PB5-0



    }
