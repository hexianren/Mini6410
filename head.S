.text
.global _start
.extern disable_watch_dog
.extern init
.extern main
_start:
@******************************************************************************
@ 异常向量，本程序中，除Reset和HandleIRQ外，其它异常都没有使用
@******************************************************************************
	ldr r0, =0x70000000
	orr r0, r0, #0x13
	mcr p15,0,r0,c15,c2,4

	ldr sp, =0x4096 @ 设置栈指针，以下都是C函数，调用前需要设好栈

	bl disable_watch_dog
	bl init
	bl main
loop:
	b loop
