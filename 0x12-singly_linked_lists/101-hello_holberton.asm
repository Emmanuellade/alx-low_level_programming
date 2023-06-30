section .data
    message db "Hello, Holberton", 0

section .text
    extern printf
    global main

main:
    ; Prepare arguments for printf function
    mov edi, message
    xor eax, eax
    call printf

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall
