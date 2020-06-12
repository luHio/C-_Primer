assume cs:code

code segment
	start:	
		mov bx,0h
		mov cx,10h  ;设置ds的值和循环次数
		
	addSum:	mov ax,0ffffh
		mov ds,ax
		mov dl,ds:[bx] ;用一个寄存器临时保存ds中的值
		mov ax,20h
		mov ds,ax  ;临时修改ds的值
		mov ds:[bx],dl   ;将寄存器中的值放在修改后的ds指向的地址中
		inc bx ;bx++ 
		loop addSum   ;循环


		mov ax,4c00h
		int 21h

code ends
end


