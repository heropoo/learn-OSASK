TOOLPATH = ..\..\z_tools
MAKE     = make
NASK     = nasm
EDIMG    = $(TOOLPATH)\edimg.exe
IMGTOL   = $(TOOLPATH)\imgtol.com
COPY     = cp
DEL      = rm -rf 

# 默认动作

default :
	$(MAKE) img

# 文件生成规则

ipl.bin : ipl.nas Makefile
	$(NASK) ipl.nas -o ipl.bin -l ipl.lst

haribote.img : ipl.bin Makefile
	dd if=ipl.bin of=haribote.img count=1 bs=512
	dd if=/dev/zero of=haribote.img bs=512 seek=1 skip=1 count=2879

# 指令

asm :
	$(MAKE) ipl.bin

img :
	$(MAKE) haribote.img

run :
	$(MAKE) img
	qemu-system-i386 -drive file=haribote.img,format=raw,if=floppy

clean :
	-$(DEL) ipl.bin
	-$(DEL) ipl.lst

src_only :
	$(MAKE) clean
	-$(DEL) haribote.img
