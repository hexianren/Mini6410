#include "s3c64xx.h"
#include "lcd.h"

void lcd_setting(void)
{
	GPECON &= (~0xf);
	GPECON |= ( 0x1);
        /* Set GPIO I J port to LCD Mode */
        GPICON = 0xAAAAAAAA;
        GPJCON &= ~(0xFFFF);
	GPJCON |= 0x0000AAAA;

	MIFPCON &= ~(1<<3);  /* Normal Mode */
	SPCON &= ~(0x3);
	SPCON |= 0x1;
	VIDCON0 &= ~((3 << 26) | (3 << 17) | (0xff << 6) | (3 << 2)); /* RGB I/F,RGB Parallel format */
	VIDCON0 |= ((14 << 6) | (1 << 4)); /* vclk == HCLK / (CLKVAL + 1) =133/15 = 9MHz */
	VIDCON1 &= ~(1 << 7);
	VIDCON1 |= ~(1 << 7);
	
	VIDCON1 &= ~(1 << 5);
	VIDCON1 &= ~(1 << 6);

	VIDTCON0 = (VBPD << 16) | (VFPD << 8) | (VSPW << 0);
	VIDTCON1 = (HBPD << 16) | (HFPD << 8) | (HSPW << 0);
	VIDTCON2 = (LINEVAL << 11) | (HOZVAL << 0);

	WINCON0  &= ~(0xf << 2);
	WINCON0  |= (0xb << 2);

	VIDOSD0A = (0 << 11) | (0 << 0);
	VIDOSD0B = (479 << 11) | (271 << 0);
	VIDOSD0C = (272) * (480);

	VIDW00ADD0B0 = FRAME_BUFFER;
	VIDW00ADD1B0 = (((HOZVAL + 1)*4 + 0) * (LINEVAL + 1)) & (0xffffff);
}
void lcd_close_backlight(void)
{	
	GPEDAT &= (~0x1);
}

void lcd_open_backlight(void)
{
	GPEDAT |= (0x1);
}
void lcd_init(void)
{
	lcd_close_backlight();
	lcd_setting();
	volatile unsigned long *p = (volatile unsigned long *)FRAME_BUFFER;
	int x, y, cnt = 0;
	for(y = 0;y <= LINEVAL;y++)
	{
		for(x = 0;x <= HOZVAL;x++)
		{
			p[cnt++] = 0xff0000;
		}
	}
	lcd_open_backlight();
}
