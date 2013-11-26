#include "s3c64xx.h"
#include "interrupt.h"

void EINT_Handle()
{
    unsigned long oft = SERVICE;
    unsigned long val;
    //GPKDAT = 0xff0f;
   switch( oft )
    {
        // K0被按下
        case 0: 
        {   
            GPKDAT |= GPK4_off | GPK5_off | GPK6_off | GPK7_off;   // 所有LED熄灭
            GPKDAT = 0xffef;      // LED1点亮
            break;
        }
        
        // S3被按下
        case 1:
        {   
            GPKDAT |= GPK4_off | GPK5_off | GPK6_off | GPK7_off;   // 所有LED熄灭
            GPKDAT = 0xffdf;      // LED2点亮
            break;
        }
        default:
            break;
    }

    //清中断
    /*if( oft == 5 ) 
        EINTPEND = (1<<11);   // EINT8_23合用IRQ5
    SRCPND = 1<<oft;
    INTPND = 1<<oft;*/
}
