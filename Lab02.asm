.model SMALL
.stack 100h
.section .data
    Msg DB 'Hello World!$'

.CODE
main ;description

main PROC
    mov ax , @Data   
    mov ds, ax
    mov dx, offset Msg
    mov ah , 09h
    int 21h
    mov ah, 4ch
    int 21h 

main ENDP