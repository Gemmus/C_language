/*
Write a C program to add two numbers using macros.
How to add two numbers using macros #define preprocessor directive in C program.
Logic to add two numbers using macros.
*/

#include <stdio.h>
#define ADDITION(x, y) (x + y)

int main()
{
    int num1, num2;

    printf("Enter two numbers to be added:\n");
    scanf("%d%d", &num1, &num2);

    printf("%d + %d = %d", num1, num2, ADDITION(num1, num2));

    return 0;
}
