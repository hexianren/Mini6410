#include "s3c64xx.h"
void disable_watch_dog(void)
{
	WTCON = 0x1;
}
