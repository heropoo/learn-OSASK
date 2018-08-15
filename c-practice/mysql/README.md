## mysql

### in Archlinux
install `libmysqlclient`
```
sudo pacman -S base-devel gcc 
sudo pacman -S mariadb
```

编译
```
gcc main.c -I /usr/include/mysql/ -L /lib/ -l libmysqlclient
```