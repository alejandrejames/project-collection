%include "asm_io.inc"
segment .data
prompt db "Hello World",0
segment .text
	global _asm_main
_asm_main:
enter 0,0
pusha
mov eax,prompt
call print_string
popa
mov eax,0
leave
ret
