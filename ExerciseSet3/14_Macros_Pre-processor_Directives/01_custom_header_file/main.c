/*
Write a C program to create and include your custom header file.
How to create and include your own header file in C programming.
C program to include another C program and custom header files.
*/

#include <stdio.h>
#include "arith.h"

int main()
{
    printf("sum(10, 20)  = %.2f\n", sum(10, 20));
    printf("sub(10, 20)  = %.2f\n", sub(10, 20));
    printf("mult(10, 20) = %.2f\n", mult(10, 20));
    printf("div(10, 20)  = %.2f\n", div(10, 20));
    printf("mod(10, 20)  = %d\n",   mod(10, 20));

    return 0;
}
