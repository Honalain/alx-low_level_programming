section .data
	hello_msg db "Hello, Holberton", 10, 0

section .text
	global main
	extern printf


main:
	sub rsp, 8

	mov rdi, hello_msg
	call printf

	add rsp, 8

	; exit the program
	mov eax, 0
	;xor edi, edi
	;syscall
	ret
