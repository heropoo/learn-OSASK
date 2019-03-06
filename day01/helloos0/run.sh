#!/bin/sh
tar -zxvf helloos.img.tar.gz
cp helloos.img ../../linux_tools/qemu/fdimage0.bin
make -C ../../linux_tools/qemu
