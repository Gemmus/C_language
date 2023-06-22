/*
Write a C program to find power of a number using for loop.
How to find power of a number without using built in library functions in C program.
Logic to find power of any number without using pow() function in C programming.
*/

#include <stdio.h>

int main()
{
    int base, exponent, result = 1;

    printf("Enter the base and then the exponent:\n");
    scanf("%d%d", &base, &exponent);

    for(int i = 0; i < exponent; i++) result *= base;

    printf("%d on the power of %d is: %d.", base, exponent, result);

}
