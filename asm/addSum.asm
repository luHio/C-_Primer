assume cs:code
;对内存中的值求和
code segment
	start:	mov ax,1000h
		mov ds,ax
		mov cx,8

		mov bx,0h
	setNum:	mov ds:[bx],ax
		inc bx
		inc bx
		add ax,ax
		loop setNum

		mov cx,8
		mov ax,0
		mov bx,0
	setN1:	add ax,ds:[bx]
		inc bx
		inc bx
		loop setN1

		mov ds,ax
		mov ax,4c00h
		int 21h
code ends
end
