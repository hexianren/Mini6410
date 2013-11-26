#include "s3c64xx.h"
#include "uart.h"
void uart_init(void)
{
	GPACON &= ~(0xff);
	GPACON |= 0x22;
	ULCON0 = 0x3; /* 8n1 */
	UCON0 = 0x5; /* Enable Rx Tx */
	UFCON0 = 0x1;
	UMCON0 = 0; /* Disable Auto Flow Control */
	UBRDIV0 = 35;
	UDIVSLOT0 = 0x1;
}

char getchar(void)
{
	while((UFSTAT0 & 0x7f) == 0);
	return URXH0;
}

void putchar(char ch)
{
	while((UFSTAT0 & (1 << 14)) == 1);
	if(ch == '\r' || ch == '\n')
	{
		UTXH0 = '\n';
		UTXH0 = '\r';
	}
	else UTXH0 = ch;
}
