assume cs:code


code segment
start:		mov ax,0
		mov al,00110110B
		and al,00000111B
		
		mov ax,4c00h
		int 21h

code ends
end start
