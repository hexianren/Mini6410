.text
.global _start
.extern disable_watch_dog
.extern init
.extern main
_start:
@******************************************************************************
@ �쳣�������������У���Reset��HandleIRQ�⣬�����쳣��û��ʹ��
@******************************************************************************
	ldr r0, =0x70000000
	orr r0, r0, #0x13
	mcr p15,0,r0,c15,c2,4

	ldr sp, =0x4096 @ ����ջָ�룬���¶���C����������ǰ��Ҫ���ջ

	bl disable_watch_dog
	bl init
	bl main
loop:
	b loop