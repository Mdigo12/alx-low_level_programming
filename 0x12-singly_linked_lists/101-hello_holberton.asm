; File: 101-hello_holberton.asm
; Auth: Jacob M. Mdigo
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

extern printf

section .data
	msg: db "Hello, Holberton", 0 ;10 is an ASCII code for \n
	fmt: db "%s", 10, 0

section .text
	global main
main:
	push rbp

	mov rax, 0		;id
	mov rdi, fmt		;file descriptor ie std_out
	mov rsi, msg		;address for the message
	call printf

	pop rbp

	mov rax, 0		;exit success code
	ret			;return
