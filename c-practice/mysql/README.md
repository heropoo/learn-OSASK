## mysql

### in cygwin
install `libmysqlclient`
```
apt-cyg install libmysqlclient-devel libmysqlclient18
```

编译
```
gcc main.c -I /usr/include/mysql/ -L /lib/ -lmysqlclient
```
