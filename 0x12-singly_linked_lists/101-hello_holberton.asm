; File: 101-hello_holberton.asm
; Auth: Brennan D Baraban
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

section .data
	msg db "Hello, Holberton",10 ;10 is an ASCII code for \n
	msg_len equ $ -msg

section .text
	global _start
_start:
	mov rax, 1		;id
	mov rdi, 1		;file descriptor ie std_out
	mov rsi, msg		;address for the message
	mov rdx, msg_len	;address for the message length
	syscall			;

	mov rax, 60		; address for exit code
	mov rdi, 0		;exit success code
	syscall
