assume cs:code

code segment

start:	mov ax,2000h
	mov ds,ax
	mov bx,1000h

	mov dl,0
	mov cx,10h
setNumber: mov ds:[bx],dl
	   inc dl
	   inc bx

	   loop setNumber



	   mov ax,4c00h
	   int 21h
code ends
end
