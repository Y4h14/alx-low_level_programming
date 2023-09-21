section .dss

section .data
	hello: db "Hello, Holberton",20
	hollolen: equ $-hello

section .text
	global_start

_start:
mov rax,1
mov rdi,1
mov rsi,hello
mov rdx,hollolen
syscall

mov rax,60
mov rdi,0
syscall
