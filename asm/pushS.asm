assume cs:code



code segment

		dw 0123h,0456h,0789h,0abch,0defh,0fedh,0cbah,0987h

		dw 0,0,0,0,0,0,0,0

		dw 0,0,0,0,0,0,0,0


start:		mov ax,cs
		mov ds,ax
		mov ss,ax
		mov bx,0
		mov sp,20h


		mov cx,8
setLabel:	mov dx,ds:[bx]
		push dx
		add bx,2

		loop setLabel
		mov ax,4c00h

		int 21h

code ends
end start

