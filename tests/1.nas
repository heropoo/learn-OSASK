data segment
Total db 'M$'
data ends
code segment
assume cs:code,ds:data
main proc far
start:
mov ax,data
mov ds,ax
mov ah,0bh
mov bx,000eh;设定颜色为黄色
int 10h
mov dx,offset Total
mov ah,09h;显示字符串
int 21h
mov ah,4ch
int 21h
ret
main endp
