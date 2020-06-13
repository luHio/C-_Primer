assume cs:code
;将dw定义的数据放入20h处
code segment
		dw 1,2,3,4,5,6,7,8


start:		mov bx,0
		mov cx,8

		mov ax,cs
		mov ds,ax
		mov ax,20h
		mov es,ax
setN:		mov ax,ds:[bx]
		mov es:[bx],ax
		add bx,2
		loop setN

		mov ax,4c00h
		int 21h
code ends

end start
