.model small            ; Use the small memory model
.stack 100h             ; Allocate 256 bytes for the stack

.data                   ; Data segment begins
    Msg db 'Hello World!$'  ; String to print, ending with '$' for int 21h function 09h

.code                   ; Code segment begins
main proc               ; Start of procedure 'main'
    mov ax, @data       ; Initialize DS with the address of the data segment
    mov ds, ax

    mov dx, offset Msg  ; Load offset address of Msg into DX
    mov ah, 09h         ; DOS function 09h - print string until '$'
    int 21h             ; Call DOS interrupt

    mov ah, 4Ch         ; DOS function 4Ch - terminate program
    int 21h

main endp               ; End of procedure
end main                ; Indicate entry point to linker
