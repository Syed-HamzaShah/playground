section .data
    hello db "Hello, World!", 0xA  ; String to print, newline at the end
    len equ $ - hello              ; Compute the length of the string

section .text
    global _start

_start:
    ; Write system call
    mov eax, 4       ; syscall number for sys_write
    mov ebx, 1       ; file descriptor 1 (stdout)
    mov ecx, hello   ; pointer to message
    mov edx, len     ; message length
    int 0x80         ; call kernel

    ; Exit system call
    mov eax, 1       ; syscall number for sys_exit
    xor ebx, ebx     ; status 0
    int 0x80         ; call kernel