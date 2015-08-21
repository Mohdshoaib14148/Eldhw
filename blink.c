#include <util/delay.h>

int main (void)
{
volatile uint8_t *dir = (volatile uint8_t *)0x24;
volatile uint8_t *port = (volatile uint8_t *)0x25;
*dir = 0x20;

  while (1)
    {
*port=0x20;
_delay_ms(1000);
*port=0x00;
_delay_ms(1000);

    }

  return 1;
}




