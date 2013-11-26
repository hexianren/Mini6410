/* WOTCH DOG register Mini6410 */
#define     WTCON           (*(volatile unsigned long *)0x7E004000)

/* Clock Time registers */
#define     APLL_LOCK       (*(volatile unsigned long *)0x7E00F000)
#define     MPLL_LOCK       (*(volatile unsigned long *)0x7E00F004)
#define     EPLL_LOCK       (*(volatile unsigned long *)0x7E00F008)
#define     OTHERS          (*(volatile unsigned long *)0x7E00F900)

#define CLK_DIV0  (*((volatile unsigned long *)0x7E00F020))

#define APLL_CON  (*((volatile unsigned long *)0x7E00F00C))
#define MPLL_CON  (*((volatile unsigned long *)0x7E00F010))
#define CLK_SRC   (*((volatile unsigned long *)0x7E00F01C))

/* SDRAM regitsers */

/* LCD   registers Mini6410 */
#define GPECON    (*((volatile unsigned long *)0x7F008080))
#define GPEDAT    (*((volatile unsigned char *)0x7F008084))

#define GPICON	  (*((volatile unsigned long *)0x7F008100))
#define GPJCON	  (*((volatile unsigned long *)0x7F008120))
#define MIFPCON   (*((volatile unsigned long *)0x7410800C))
#define VIDCON0   (*((volatile unsigned long *)0x77100000))
#define VIDCON1   (*((volatile unsigned long *)0x77100004))
#define SPCON     (*((volatile unsigned long *)0x7F0081A0))
#define VIDTCON0  (*((volatile unsigned long *)0x77100010))
#define VIDTCON1  (*((volatile unsigned long *)0x77100014))
#define VIDTCON2  (*((volatile unsigned long *)0x77100018))

#define WINCON0   (*((volatile unsigned long *)0x77100020))
#define VIDOSD0A  (*((volatile unsigned long *)0x77100040))
#define VIDOSD0B  (*((volatile unsigned long *)0x77100044))
#define VIDW00ADD0B0 (*((volatile unsigned long *)0x771000A0))
#define VIDW00ADD1B0 (*((volatile unsigned long *)0x771000D0))
#define VIDOSD0C     (*((volatile unsigned long *)0x77100048))
/* Buzzer GPF14 */
#define GPFCON              (*(volatile unsigned long *)0x7F0080A0)
#define GPFDAT              (*(volatile unsigned long *)0x7F0080A4)
#define GPFPUD		    (*(volatile unsigned long *)0x7F0080A8)

/* NAND Flash registers */

/*GPIO registers Mini6410*/
#define GPACON              (*(volatile unsigned long *)0x7F008000)
#define GPADAT              (*(volatile unsigned long *)0x7F008004)

#define GPBCON              (*(volatile unsigned long *)0x7F008020)
#define GPBDAT              (*(volatile unsigned long *)0x7F008024)

#define GPFCON              (*(volatile unsigned long *)0x7F0080A0)
#define GPFDAT              (*(volatile unsigned long *)0x7F0080A4)
#define GPFPUD              (*(volatile unsigned long *)0x7F0080A8)

#define GPGCON              (*(volatile unsigned long *)0x7F0080C0)
#define GPGDAT              (*(volatile unsigned long *)0x7F0080C4)
#define GPGPUD              (*(volatile unsigned long *)0x7F0080C8)

#define GPHCON              (*(volatile unsigned long *)0x7F0080E0)
#define GPHDAT              (*(volatile unsigned long *)0x7F0080E8)
#define GPHPUD              (*(volatile unsigned long *)0x7F0080EC)

#define GPKCON              (*(volatile unsigned long *)0x7F008800)
#define GPKDAT              (*(volatile unsigned long *)0x7F008808)
#define GPKPUD              (*(volatile unsigned long *)0x7F00880C)

#define GPNCON              (*(volatile unsigned long *)0x7F008830)
#define GPNDAT              (*(volatile unsigned long *)0x7F008834)
#define GPNPUD              (*(volatile unsigned long *)0x7F008838)


/*UART registers*/
#define UCON0               (*(volatile unsigned long *)0x7F005004)
#define ULCON0              (*(volatile unsigned long *)0x7F005000)
#define UFCON0		    (*(volatile unsigned long *)0x7F005008)
#define UMCON0              (*(volatile unsigned long *)0x7F00500C)
#define UBRDIV0             (*(volatile unsigned long *)0x7F005028)
#define UDIVSLOT0           (*(volatile unsigned long *)0x7F00502C)

#define UFSTAT0             (*(volatile unsigned long *)0x7F005018)
#define UTXH0               (*(volatile unsigned char *)0x7F005020) /* It is char right */
#define URXH0               (*(volatile unsigned char *)0x7F005024) /* It is char right */


/*interrupt registes*/
#define PRIORITY            (*(volatile unsigned long *)0x7F008280) /* Mini6410 */
#define SERVICE             (*(volatile unsigned long *)0x7F008284)   /* Mini6410 */

/*external interrupt registers*/
#define EINT0MASK           (*(volatile unsigned long *)0x7F008920) /* Mini6410 */
#define EINT0CON0           (*(volatile unsigned long *)0x7F008900) /* Mini6410 */
#define EINT0FLTCON0        (*(volatile unsigned long *)0x7F008910) /* Mini6410 */

/*
 * LED1,LED2,LED3,LED4对应GPK4、GPK5、GPK6、GPK7 Mini6410
 */
#define	GPK4_out	(1<<(4*4))
#define	GPK5_out	(1<<(5*4))
#define	GPK6_out	(1<<(6*4))
#define	GPK7_out	(1<<(7*4))


#define	GPK4_msk	(0xf<<(4*4))
#define	GPK5_msk	(0xf<<(5*4))
#define	GPK6_msk	(0xf<<(6*4))
#define	GPK7_msk	(0xf<<(7*4))

#define	GPK4_off	(1<<(4))
#define	GPK5_off	(1<<(5))
#define	GPK6_off	(1<<(6))
#define	GPK7_off	(1<<(7))


/*
 * K1,K2,K3对应GPN0、GPN1、GPN2 Mini6410
 */
#define GPN0_eint     (0x2<<(0*2))
#define GPN1_eint     (0x2<<(1*2))
#define GPN2_eint     (0x2<<(2*2))
#define GPN3_eint     (0x2<<(3*2))


#define GPN0_msk      (0x3<<(0*2))
#define GPN1_msk      (0x3<<(1*2))
#define GPN2_msk      (0x3<<(2*2))
#define GPN3_msk      (0x3<<(3*2))

