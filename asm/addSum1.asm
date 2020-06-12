;将0-63移动到0:200~0:23中


assume cs:code
code segment

	start :	mov ax,20h
	mov ds,ax
	mov bx,0
	mov cx,64

	setNumber: mov ds:[bx],bl
	inc bx
	loop setNumber


	

	mov ax,4c00h
	int 21h
code ends
end
