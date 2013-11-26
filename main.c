#include "uart.h"
#include "buzzer.h"
int main()
{
	char c;
	{
		putchar('1');
		putchar('\n');
		putchar('1');
		putchar('\n');
		putchar('1');
		putchar('\r');
	}
	unsigned long delay = 0;
	while(1)
	{
	buzzer_stop();
	for(delay = 0; delay < 0xfffff * 2; delay++);
	buzzer_ring();
	for(delay = 0; delay < 0xfffff * 2; delay++);
	}
	while(1);	
	return 0;
}
