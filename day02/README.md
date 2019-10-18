### nask汇编指令
	ORG			告诉nask，开始执行的时候，把这些机器语言指令装载到内存中的哪个位置。
	JMP			跳转
	“entry:” 	这是标签的声明，用于指定JMP指令的跳转目的地等。
	MOV			赋值。“MOV AX,0”，相当于“AX=0”，“MOV SS,AX”就相当于“SS=AX”。CPU里有一种名为寄存器的存储电路，在机器语言中就相当于变量的功能。具有代表性的寄存器有以下8个：
		AX -- accumulator 累加寄存器
		CX -- counter 计数寄存器
		DX -- data 数据寄存器
		BX -- base 基址寄存器
		SP -- stack pointer 栈指针寄存器
		BP -- base pointer 基址指针寄存器
		SI -- source index 源地址寄存器
		DI -- destination index 目的变址寄存器
	这些都是16位寄存器，因此可以存储16位的二进制数。
	

### hexdump
hexdump命令一般用来查看“二进制”文件的十六进制编码，但实际上它能查看任何文件，而不只限于二进制文件。

```
hexdump -C helloos.img  #输出规范的十六进制和ASCII码。
```
