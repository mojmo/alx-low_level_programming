	global	main
	extern	printf

section		.text

main:
	mov	edi, msg
	mov	eax, 0
	call	printf

section		.data

	msg	db	"Hello, Holberton", 0xA, 0
