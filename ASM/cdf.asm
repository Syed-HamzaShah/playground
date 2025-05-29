.model small
.stack 100h
.data
	a db 'A'  
.code
main proc
	mov ax, @data
	mov ds,ax
	mov dl, a
	mov ah, 2
	int 21h
	mov ah, 4ch
	int 21h
main endp
end main

;mov dh,20
;mov dl,30
;add dh,dl
;mov ah,2

