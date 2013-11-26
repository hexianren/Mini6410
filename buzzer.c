#include "s3c64xx.h"
#include "buzzer.h"
/*****************************
 *   Buzzer is GPF14
 ****************************/
void buzzer_init(void)
{
	GPFCON &= ~(0x11 << 28);
	GPFCON |=  (0x01 << 28);
	GPFPUD &= ~(0x11 << 28);
}

void buzzer_ring(void)
{
	GPFDAT |=  (0x1  << 14);
}

void buzzer_stop(void)
{
	GPFDAT &=  ~(0x1  << 14);
}
