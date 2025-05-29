.model small
.stack 100h
.data
.code
main proc
	mov ah, 49
	mov al, 50
	add ah, al
	mov dl, ah
	mov ah, 2 
	int 21h
	mov ah, 4ch
	int 21h

main endp
end main