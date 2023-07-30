section .data
    hello: db "Hello, Holberton", 10, 0   ; Message to print

section .text
    global main

    extern printf

main:
    ; Setting up stack frame
    push rbp
    mov rbp, rsp

    ; Calling printf with the string message
    lea rdi, [hello]
    xor eax, eax    ; remove return value
    call printf

    ; Cleaning up stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax    ; Return 0
    ret

