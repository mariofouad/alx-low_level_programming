section .data
    hello db 'Hello, Holberton', 10   ; 10 is the ASCII code for newline

section .text
    global _start

_start:
    ; Write the string to stdout
    mov eax, 0x4         ; syscall number for sys_write
    mov edi, 1           ; file descriptor 1 (stdout)
    mov esi, hello       ; pointer to the message
    mov edx, 18          ; length of the message
    syscall

    ; Exit the program
    mov eax, 0x1         ; syscall number for sys_exit
    xor edi, edi         ; exit code 0
    syscall

