.model small
.stack 100h
.data
    equal_msg    db 'Equal$'
    not_equal_msg db 'Not Equal$'
.code
main proc

    mov ax, @data
    mov ds, ax

    mov cl, 5            ; Try changing this to test the else block
    cmp cl, 5            ; Compare CL with 5
    jne not_equal        ; If CL ? 5, jump to 'else' block

    ; --- IF BLOCK ---
    lea dx, equal_msg
    mov ah, 09h
    int 21h
    jmp done             ; Skip the 'else' block

not_equal:
    ; --- ELSE BLOCK ---
    lea dx, not_equal_msg
    mov ah, 09h
    int 21h

done:
    mov ah, 4ch
    int 21h

main endp
end main
