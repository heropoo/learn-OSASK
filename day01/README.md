### nask汇编指令
很多语法模仿"NASM"
```sh    
DB      ;"data byte"缩写，就是写入一个字节的指令
RESB    ;"reserve byte"的缩写，"RESB 10"就是空出10个字节
DW DD   ;"data word","data double-word"的缩写 前者16位2字节，后者32位4字节
RESB 0x1fe-$    ;填写0x00直到0x01FE
        ;但这个在nasm中不通过，故使用times
        times 0x1fe - ($ - $$) DB 0
        ;times 510 - ($-$$) DB 0
```

### FAT12格式
第一个扇区为启动区，每512字节为1扇区，1440KB也就是1474560字节除以512得2880。计算机先从最初一个扇区开始读软盘，然后检查这个扇区的最后两个字节内容，如果为55AA就开始执行程序。有时候启动区也称`IPL`。
