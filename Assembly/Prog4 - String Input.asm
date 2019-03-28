stseg segment
db 32 dup(?)
stseg ends
;==================
dtseg segment
prompt db 'Enter a string: ','$'
String  db 128 dup('$')
dtseg ends
;=================
cdseg segment
 main proc 
	assume cs:cdseg,ds:dtseg,ss:stseg
start:
    mov ax, dtseg
    mov ds, ax
   
    mov ah, 09h		    ;output
    mov dx, offset prompt   ;print prompt
    int 21h

    mov ah, 0eh		    ;input string
    mov string,ah	    ;mov string to al register
    int 21h

loop_start:
    mov al, [string+si]
    inc si
    test al, al
    jz done1ax

    push ax                 ; pushes implicit `AL`
    jmp loop_start

done1ax:
    pop ax                  ; pops `AL` and `AH`, `AH` isn't used
    mov [string+di], al
    inc di
    cmp di, si
    jb done1ax              ; jl is signed comparison: 8000h < 7FFFh

    mov ah, 40h                 ; WriteFile
    mov bx, 1                   ; STDOUT
    mov cx, 4                   ; Number of bytes to write
    mov ah,09h
    mov dx, OFFSET string        ; Data to write
    int 21h
    mov ax, 4C00h               ; Return 0
    int 21h

    main endp
cdseg ends
end main