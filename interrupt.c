#include "s3c64xx.h"
#include "interrupt.h"

void EINT_Handle()
{
    unsigned long oft = SERVICE;
    unsigned long val;
    //GPKDAT = 0xff0f;
   switch( oft )
    {
        // K0������
        case 0: 
        {   
            GPKDAT |= GPK4_off | GPK5_off | GPK6_off | GPK7_off;   // ����LEDϨ��
            GPKDAT = 0xffef;      // LED1����
            break;
        }
        
        // S3������
        case 1:
        {   
            GPKDAT |= GPK4_off | GPK5_off | GPK6_off | GPK7_off;   // ����LEDϨ��
            GPKDAT = 0xffdf;      // LED2����
            break;
        }
        default:
            break;
    }

    //���ж�
    /*if( oft == 5 ) 
        EINTPEND = (1<<11);   // EINT8_23����IRQ5
    SRCPND = 1<<oft;
    INTPND = 1<<oft;*/
}
