assume cs:code

code segment
start:	mov bx,0ech  ;0ech=236
	mov cx,7bh   ;7bh=123
	mov ax,0h

setNumber:add ax,bx

	  loop setNumber

	  mov ax,4c00h
	  int 21h
code ends
end
	
