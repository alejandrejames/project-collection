%include "asm_io.inc"

segment .data
prompt db "Enter number: ",0
prompt1 db "The sum is: ",0
prompt2 db "The sum of ",0
prompt3 db " and ",0
prompt4 db " is: ",0
prompt5 db "The difference is: ",0
prompt6 db "The product is: ",0
prompt7 db "The quotient is: ",0

segment .bss
input1 resd 1
input2 resd 1

segment .text
	global _asm_main

_asm_main:
enter 0,0
pusha


mov eax,prompt
call print_string
call read_int
mov[input1],eax

mov eax,prompt
call print_string
call read_int
mov[input2],eax


mov eax,prompt1
call print_string
mov eax,[input1]
add eax,[input2]
call print_int



call print_nl
mov eax,prompt2
call print_string

mov eax,[input1]
call print_int

mov eax,prompt3
call print_string

mov eax,[input2]
call print_int

mov eax,prompt4
call print_string

mov eax,[input1]
add eax,[input2]
call print_int


call print_nl
mov eax,prompt5
call print_string
mov eax,[input1]
sub eax,[input2]
call print_int



call print_nl
mov eax,prompt6
call print_string
mov eax,[input1]
imul eax,[input2]
call print_int


call print_nl
mov eax,prompt7
call print_string
mov eax,[input1]
mov ebx,[input2]
div ebx
call print_int


popa
mov eax,0
leave
ret
