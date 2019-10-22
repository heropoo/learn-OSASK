org 0x7c00

mov ax,cs
mov ds,ax
mov ax,0xb800
mov es,ax

mov bx,string
mov si,0
mov cx,12

display:
mov al,[cs:bx]
mov ah,0x1f
mov [es:si],ax
inc bx
add si,2
loop display

hlt

string:
db "Hello,World!"
