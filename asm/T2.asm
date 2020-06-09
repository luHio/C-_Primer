assume cs:code


code segment
	start:
	mov ax,1000h
	mov bx,0h
	mov ds,ax
	mov ds:[bx],ax
	inc bx
	mov al,12h
	mov ds:[bx],al
	inc bx
	mov cl,15h
	mov ds:[bx],cl
	inc bx

code ends
end

