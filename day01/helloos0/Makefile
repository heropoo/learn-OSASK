img:
	tar -zxvf helloos.img.tar.gz
run:img
	qemu-system-i386 -drive file=helloos.img,format=raw,if=floppy
clean:
	rm -rf helloos.img
