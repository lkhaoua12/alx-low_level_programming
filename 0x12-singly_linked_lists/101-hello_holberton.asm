global main
section .data
msg db "Hello, Holberton", 10, 0
len equ $-msg
section .text
main:
    ; write the message to stdout
    mov eax, 1          ; system call for write
    mov edi, 1          ; file descriptor for stdout
    mov esi, msg        ; address of message to write
    mov edx, len        ; length of message
    syscall             ; invoke system call to write

    ; exit the program
    mov eax, 60         ; system call for exit
    xor edi, edi        ; exit status 0
    syscall             ; invoke system call to exit

