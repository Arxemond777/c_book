#include <iostream>
#include <stdio.h>

int main() {
    int arg1, arg2, add, sub, mul, quo, rem ;

    printf( "Enter two integer numbers : " );
    scanf( "%d%d", &arg1, &arg2 );

    /* Perform Addition, Subtraction, Multiplication & Division */
    __asm__ ( "addl %%ebx, %%eax;" : "=a" (add) : "a" (arg1) , "b" (arg2) );
    __asm__ ( "subl %%ebx, %%eax;" : "=a" (sub) : "a" (arg1) , "b" (arg2) );
    __asm__ ( "imull %%ebx, %%eax;" : "=a" (mul) : "a" (arg1) , "b" (arg2) );

    __asm__ ( "movl $0x0, %%edx;"
            "movl %2, %%eax;"
            "movl %3, %%ebx;"
            "idivl %%ebx;" : "=a" (quo), "=d" (rem) : "g" (arg1), "g" (arg2) );

    printf( "%d + %d = %d\n", arg1, arg2, add );
    printf( "%d - %d = %d\n", arg1, arg2, sub );
    printf( "%d * %d = %d\n", arg1, arg2, mul );
    printf( "%d / %d = %d\n", arg1, arg2, quo );
    printf( "%d %% %d = %d\n", arg1, arg2, rem );


    /*__asm__ (
        "section	.text"
        "global _start   ;must be declared for linker (ld)"
        "_start:	            ;tells linker entry point"
        "mov	edx,len     ;message length"
        "mov	ecx,msg     ;message to write"
        "mov	ebx,1       ;file descriptor (stdout)"
        "mov	eax,4       ;system call number (sys_write)"
        "int	0x80        ;call kernel"

        "mov	eax,1       ;system call number (sys_exit)"
        "int	0x80        ;call kernel"

        "section	.data"
        "msg db 'Hello, world!', 0xa  ;string to be printed"
        "len equ $ - msg     ;length of the string"
    );*/

    std::cout << "Hello, World!" << std::endl;
    return 0;
}