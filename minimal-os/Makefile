CROSS_COMPILE = aarch64-linux-gnu-
CFLAGS = -nostdlib -nostartfiles -ffreestanding

all: kernel8.img

kernel8.img: start.o main.o
	$(CROSS_COMPILE)ld -T linker.ld -o kernel.elf $^
	$(CROSS_COMPILE)objcopy kernel.elf -O binary kernel8.img

%.o: %.c
	$(CROSS_COMPILE)gcc $(CFLAGS) -c $<

%.o: %.S
	$(CROSS_COMPILE)gcc $(CFLAGS) -c $<

clean:
	rm -f *.o *.elf kernel8.img