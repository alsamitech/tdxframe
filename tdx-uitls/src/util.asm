section .data
        text db "Here's some text."

section .text
        global _start
_start:
	pop rax
	pop rax
	pop rax
	mov rdi, rax
        mov rax, 2
        mov rsi, 64+1
        mov rdx, 0644o
        syscall

;        push rax
;        mov rdi, rax
;        mov rax, 1
;        mov rsi, text
;        mov rdx, 17
;        syscall

        mov rax, 3
        pop rdi
        syscall
	
	mov rax, 60
	mov rdi, 0
	syscall
