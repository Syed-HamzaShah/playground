.model small
.stack 100h
.data
.code
main proc 
    
    
    mov ah, 1
    int 21h
    
    mov bl,ah
    add bl,32
     
     mov cx, 26  
     
     start_loop:  
     
        mov dl, bl   
        mov ah, 2
        int 21h  
        
         
        inc bl
        
        mov dl, 0ah
        mov ah, 2
        int 21h
        
        mov dl, 0dh
        mov ah, 2
        int 21h
                
     loop start_loop:
     
     mov ah, 4ch
     int 21h   
    
     
main endp
end main            