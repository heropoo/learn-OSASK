all:img

boot:
	nasm ipl.nas -o ipl.bin -l ipl.lst

img:boot
	dd if=ipl.bin of=helloos.img count=1 bs=512
	dd if=/dev/zero of=helloos.img bs=512 seek=1 skip=1 count=2879

run:img
	qemu-system-i386 -drive file=helloos.img,format=raw,if=floppy

clean :
	rm -rf helloos.img ipl.bin ipl.lst
