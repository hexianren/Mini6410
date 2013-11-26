target remote localhost:3333
monitor reset;halt
monitor mww 0x0 0xffffffff 0x100
monitor load_image int.bin 0x0 bin
monitor reg pc 0x0
