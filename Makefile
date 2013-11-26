int.bin: head.o disable_watch_dog.o init.o led.o clock.o main.o uart.o buzzer.o lcd.o
	arm-none-eabi-ld -nostdlib -Map=Mini6410.map -g -Ttext 0 -o Mini6410.elf $^
	arm-none-eabi-objcopy -O binary Mini6410.elf Mini6410.bin
	arm-none-eabi-objdump -D Mini6410.elf > Mini6410.dis

%.o : %.S
	arm-none-eabi-gcc -fno-builtin -nostdlib -g -o $@ $< -c

%.o : %.c
	arm-none-eabi-gcc -fno-builtin -nostdlib -g -o $@ $< -c

clean:
	rm *.o Mini6410.elf Mini6410.bin Mini6410.dis Mini6410.map
