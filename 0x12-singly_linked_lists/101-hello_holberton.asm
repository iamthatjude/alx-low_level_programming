section .text
		extern printf					;C function to be called
		global main						;entry point

main:
		mov ecx, msg
		mov edx, fmt
		mov eax, 0
		call printf						;call C function => printf()

		mov eax, 0						;return value => 0
		ret								;return

section .data
		msg: db "Hello, Holberton", 0	;terminate string with 0 in C
		fmt: db "%s", 10, 0				;printf format => '\n' or '0'
