#define VSPW 1
#define VBPD 2
#define LINEVAL 271
#define VFPD 1

#define HSPW 5
#define HBPD 44
#define HOZVAL 479
#define HFPD 3

#define FRAME_BUFFER 0x54000000
void lcd_init(void);
void lcd_setting(void);
void lcd_open(void);
void lcd_close(void);
