; Program For Creating a Calculator in assembly language, masm

.MODEL SMALL
.STACK 100H
.DATA
    num1 DW 0        ; First number
    num2 DW 0        ; Second number
    result DW 0      ; Result of the operation
    prompt1 DB "Enter first number: $"
    prompt2 DB "Enter second number: $"
    prompt3 DB "Enter operation (+, -, *, /): $"
   // filepath: c:\Users\user\OneDrive\Desktop\DSA CPP\Demo.asm

    resultMsg DB "Result: $"
    operation DB ?   ; Operation character
    newline DB 0Dh, 0Ah, "$" ; New line for output formatting

    errorMsg DB "Error: Division by zero!$"
    errorMsgLen DB $ - errorMsg ; Length of the error message       

.CODE

; Procedure to read a number from the user
ReadNumber PROC
    XOR AX, AX          ; Clear AX
    MOV BX, 10          ; Base 10 for multiplication
ReadDigit:
    MOV AH, 01H         ; Function to read a character
    INT 21H             ; Read character
    CMP AL, 0DH         ; Check for Enter key
    JE EndRead          ; If Enter, end input
    SUB AL, '0'         ; Convert ASCII to digit
    MUL BX              ; Multiply AX by 10
    ADD AX, AL          ; Add digit to AX
    JMP ReadDigit       ; Repeat for next digit
EndRead:
    RET
; Procedure to read a single character
ReadChar PROC
    MOV AH, 01H         ; Function to read a character
    INT 21H             ; Read character
    RET
ReadChar ENDP

; Procedure to print a number
ReadNumber ENDP

; Procedure to print a number
PrintNumber PROC
    MOV CX, 10          ; Base 10
    XOR DX, DX          ; Clear DX
    MOV BX, AX          ; Copy AX to BX
PrintLoop:
    XOR DX, DX          ; Clear DX
    DIV CX              ; Divide BX by 10
    ADD DL, '0'         ; Convert remainder to ASCII
    PUSH DX             ; Push digit onto stack
    CMP AX, 0           ; Check if AX is 0
    JNE PrintLoop       ; If not, continue
PrintDigits:
    POP DX              ; Pop digit from stack
    MOV AH, 02H         ; Function to display character
PrintDigits:
    POP DX              ; Pop digit from stack
    MOV AH, 02H         ; Function to display character
    INT 21H             ; Display character
    CMP SP, BP          ; Check if stack is empty
    JNE PrintDigits     ; If not, continue
    RET
    ; Initialize DS
    MOV AX, @DATA
    MOV DS, AX

    ; Prompt for first number
    LEA DX, prompt1
    MOV AH, 09H
    INT 21H

    ; Read first number from user
    CALL ReadNumber
    MOV num1, AX

    ; Prompt for second number
    LEA DX, prompt2
    MOV AH, 09H
    INT 21H
    ; Read operation from user
    CALL ReadChar
    MOV operation, AL
    MOV num2, AX

    ; Prompt for operation
    LEA DX, prompt3
    MOV AH, 09H
    INT 21H

    ; Read operation from user
    CALL ReadChar
    MOV operation, AL


    ; Perform the operation based on user input

        CMP operation, '+'
        JE ADDITION
    
        CMP operation, '-'
        JE SUBTRACTION
    
        CMP operation, '*'
        JE MULTIPLICATION
    
        CMP operation, '/'
        JE DIVISION
    
        ; Invalid operation
        JMP INVALID_OPERATION
    
    ADDITION:
        MOV AX, num1
        ADD AX, num2
        MOV result, AX
        JMP DISPLAY_RESULT
    
    SUBTRACTION:
        MOV AX, num1
        SUB AX, num2
        MOV result, AX
        JMP DISPLAY_RESULT
    
    MULTIPLICATION:
        MOV AX, num1
        MOV BX, num2
        MUL BX
        MOV result, AX
        JMP DISPLAY_RESULT
    
    DIVISION:
        MOV AX, num2
        CMP AX, 0
        JE DIVISION_BY_ZERO
        MOV AX, num1
        MOV BX, num2
        DIV BX
        MOV result, AX
        JMP DISPLAY_RESULT
    
    DIVISION_BY_ZERO:
        LEA DX, errorMsg
        MOV AH, 09H
        INT 21H
        JMP END_PROGRAM
    
    INVALID_OPERATION:
        LEA DX, newline
        MOV AH, 09H
        INT 21H
        LEA DX, errorMsg
        MOV AH, 09H
        INT 21H
        JMP END_PROGRAM
    
    DISPLAY_RESULT:
        LEA DX, newline
        MOV AH, 09H
        INT 21H
        LEA DX, resultMsg
        MOV AH, 09H
        INT 21H
        CALL PrintNumber
        JMP END_PROGRAM
    
    END_PROGRAM:
        MOV AH, 4CH
        INT 21H
   