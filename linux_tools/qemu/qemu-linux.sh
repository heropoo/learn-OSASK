#!/bin/sh
#export SDL_VIDEODRIVER=windib
#export QEMU_AUDIO_DRV=none
#export QEMU_AUDIO_LOG_TO_MONITOR=0
#qemu-system-x86_64 fdimage0.bin -vnc 0.0.0.0:0
qemu-system-i386 -drive file=fdimage0.bin,format=raw,if=floppy
