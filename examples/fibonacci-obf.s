	.text
	.file	"fibonacci-obf.c"
	.globl	fib
	.p2align	4, 0x90
	.type	fib,@function
fib:
	.cfi_startproc
# %bb.0:
	movl	$1, %eax
	cmpl	$2, %edi
	jl	.LBB0_3
# %bb.1:
	addl	$-1, %edi
	movl	$1, %ecx
	xorl	%edx, %edx
	.p2align	4, 0x90
.LBB0_2:
	movl	%edx, %eax
	addl	%ecx, %eax
	movl	%ecx, %edx
	movl	%eax, %ecx
	addl	$-1, %edi
	jne	.LBB0_2
.LBB0_3:
	retq