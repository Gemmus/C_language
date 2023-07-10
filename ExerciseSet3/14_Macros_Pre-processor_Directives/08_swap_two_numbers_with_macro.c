/*
Write a C program to swap two numbers using macro.
How swap two numbers without using third variable using macro in C program.
Logic to swap two number without using third variable using macro.
*/

#include <stdio.h>
#define SWAP(x, y) (x ^= y ^= x ^= y)

int main()
{
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    printf("Values before swapping:\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    SWAP(num1, num2);

    printf("Values after swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
