; My comment: I have never written in assembly language, wow
; File: 101-hello_holberton.asm
; Author: Oluwadare Toluwalase
; Description: a 64-bit program in assembly that logs
; Hello, Holberton, followed by a new line.

extern printf

section .text
global main

main:
	push rbp

	mov rdi,form
  	mov rsi,message
   	mov rax,0
   	call printf

	pop rbp

	mov rax,0
	ret

section .data
	message: db "Hello, Holberton", 0
	form: db "%s", 10, 0
