; Nico Edrich
; custom_vs_compiled_assignment code
; asm version

%include "/usr/local/share/csc314/asm_io.inc"


segment .data

	str1	db	"Enter a value for A: ",0
	str2	db	"Enter a value for B: ",0
	str3	db	"Enter a value for C: ",0
	str4	db	"X = ",0

segment .bss


segment .text
	global  asm_main

asm_main:
	push	ebp
	mov		ebp, esp
	; ********** CODE STARTS HERE **********

	mov 	eax, str1
	call	print_string 	; ask for A
	call	read_int
	mov		ebx, eax		; set ebx to A
	mov		eax, str2
	call	print_string 	; ask for B
	call	read_int
	mov		ecx, eax		; set ecx to B
	mov		eax, str3
	call	print_string 	; ask for C
	call	read_int
	mov		edi, eax		; set edi to C

	mov		esi, ebx
	add		esi, 95			; 1st A in equation

	;test1
	;mov		eax, esi
	;call	print_int
	;call	print_nl
	; should be 98 if A is 3
	; confirmed 98 up to this point

	mov		eax, ecx		; should allow further use of ecx

	mov		edx, 16
	mul		edx				; eax should now be B * 16

	;test2
	;call	print_int
	;call 	print_nl
	; should be 6 * 16 or 96 if B is equal to 6

	mov		edx, 0
	div		edi				; edi is C variable, eax should now be (B*16)/C

	;test3
	;call print_int
	;call print_nl
	; should be 10 if C is 9

	mul		esi

	;test4
	;call	print_int
	;call 	print_nl
	; should be 980 if mul worked properly with previous esi being A + 95

	sub		eax, ebx
	add		eax, 20
	mov		ebx, eax

	mov		eax, str4
	call	print_string
	mov		eax, ebx
	call	print_int
	call	print_nl

	; *********** CODE ENDS HERE ***********
	mov		eax, 0
	mov		esp, ebp
	pop		ebp
	ret
