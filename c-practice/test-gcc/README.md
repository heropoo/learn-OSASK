## gcc

1. 简单编译
```
gcc main.c -o main
```

上述编译过程是分为四个阶段进行的，即预处理(也称预编译，Preprocessing)、编译(Compilation)、汇编 (Assembly)和连接(Linking)

2.1. 预处理
```
gcc -E main.c -o main.i
```

2.2. 编译为汇编代码
```
gcc -S main.i -o main.s
```

2.3. 汇编
对于上面的汇编代码文件，gas汇编器负责将其编译为目标文件
```
gcc -c main.s -o main.o
```

2.4. 连接
gcc连接器是gas提供的，负责将程序的目标文件与所需的所有附加的目标文件连接起来，最终生成可执行文件。附加的目标文件包括静态连接库和动态连接库。
```
gcc main.o -o main
```