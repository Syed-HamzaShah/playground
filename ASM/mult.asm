.model small
.stack 100h
.data
.code
main proc
	mov ah, 3
	mov al, 2
	mul ah
	add al, 48
	mov dl, al
	mov ah, 2
	int 21h
	mov ah, 4ch
	int 21h


main endp
end main