%include "asm_io.inc"

segment .data
;Prompts
prompt db "Enter value: ",0
prompt1 db "Enter a value again: ",0
prompt2 db "Both values are equal",0
prompt3 db "Both values are not equal",0

segment .bss
;Inputs
input1 resd 1
input2 resd 1

segment .text
	global _asm_main

_asm_main:
enter 0,0
pusha
;Start

;Get first input from user
mov eax,prompt
call print_string
call read_int
mov[input1],eax

;Get second input from user
mov eax,prompt
call print_string
call read_int
mov[input2],eax

;Move the values to the registers
mov eax,[input1]
mov ebx,[input2]

;Compare
cmp eax,ebx
je equal
jne notequal

;if equal
equal:
    mov eax,prompt2
    jmp Both

;if not equal
notequal:
    mov eax,prompt3

;print the result
Both:
    call print_string

;end program
popa
mov eax,0
leave
ret
