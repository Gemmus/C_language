/*
Write a C program to find square and cube of a number using macro.
How to find cube of a number using macro #define preprocessor directive in C program.
Logic to find square and cube of a number using macro.
*/

#include <stdio.h>
#define SQUARE(x) (x * x)
#define CUBE(x) (x * x * x)

int main()
{
    int num;

    printf("Enter the value:\n");
    scanf("%d", &num);

    printf("The square of %d: %d.\n", num, SQUARE(num));
    printf("The cube of %d: %d.\n", num, CUBE(num));

    return 0;
}
