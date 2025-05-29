.model small
.stack 100h
.data
.code
main proc
	mov ah, 7
	mov al, 3
	sub ah ,al
	mov dl, ah
	add dl, 48
	mov ah, 2
	int 21h
	mov ah, 4ch
	int 21h


main endp
end main