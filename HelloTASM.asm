.MODEL SMALL
.STACK 100H
.DATA
    message DB "Hello, Hamza!$"

.CODE
MAIN PROC
    ; Initialize DS
    MOV AX, @DATA
    MOV DS, AX

    ; Print the message using DOS interrupt 21h
    MOV DX, OFFSET message
    MOV AH, 09H
    INT 21H

    ; Exit program
    MOV AH, 4CH
    INT 21H

MAIN ENDP
END MAIN