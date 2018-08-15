## gcc

参考： http://www.cnblogs.com/ggjucheng/archive/2011/12/14/2287738.html#_Toc311642845

### 1. 简单编译
```
gcc test.c -o test
```

上述编译过程是分为四个阶段进行的，即预处理(也称预编译，Preprocessing)、编译(Compilation)、汇编 (Assembly)和连接(Linking)

### 2. 分步编译 

2.1. 预处理
```
gcc -E test.c -o test.i
```

2.2. 编译为汇编代码
```
gcc -S test.i -o test.s
```

2.3. 汇编

对于上面的汇编代码文件，gas汇编器负责将其编译为目标文件
```
gcc -c test.s -o test.o
```

2.4. 连接

gcc连接器是gas提供的，负责将程序的目标文件与所需的所有附加的目标文件连接起来，最终生成可执行文件。附加的目标文件包括静态连接库和动态连接库。
```
gcc test.o -o test
```

### 3. 多个程序文件的编译

假设有一个由test1.c和 test2.c两个源文件组成的程序
```
gcc test1.c test2.c -o test
```

上面这条命令大致相当于依次执行如下三条命令：
```
gcc -c test1.c -o test1.o
gcc -c test2.c -o test2.o
gcc test1.o test2.o -o test
```

