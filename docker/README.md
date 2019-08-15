# osask-dev

OSASK dev enviroment based on AlpineLinux.

support:
* ssh
* git 
* vim
* make
* qemu-system-x86_64

## build 
```
docker build -t heropoo/osask-dev .
```

## run 
```
docker run --rm -d -p 2222:22 -p 5900:5900 heropoo/osask-dev
```
