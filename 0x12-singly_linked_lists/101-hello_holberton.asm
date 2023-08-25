section 	.data
    format db 'Hello, Holberton', 0xa, 0

section 	.text
    global 	main
    extern 	printf

main:
    mov 	edi, format
    xor 	eax, eax
    call 	printf
    mov eax, 0xa, 0
    ret
