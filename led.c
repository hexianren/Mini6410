#include "s3c64xx.h"
#include "led.h"
void led_init(void)
{
	GPKCON = 0x11111111;
	GPKDAT = 0xff0f;	
}
