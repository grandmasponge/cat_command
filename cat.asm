global _start

section .bss
    fstat resb 88  ; 88 bytes for struct s

section .text
    
    _start:
        mov rax, 2
        mov rdi, [rsp + 16]
        mov rsi, 0
        mov rdx, 0
        syscall

        mov rdi, rax
        mov rax, 0x05
        mov rsi, [fstat]
        syscall

        mov rax, 0x28
        mov rsi, rdi
        mov rdi, 1
        mov rdx, 0
        mov r10, fstat + 14
        syscall

        mov rax, 60
        mov rdi, 0
        syscall





        



