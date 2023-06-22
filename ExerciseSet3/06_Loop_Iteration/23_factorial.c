/*
Write a C program to input a number and calculate its factorial using for loop.
How to find factorial of a number in C program using loop.
Logic to find factorial of a number in C programming.
*/

#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) factorial *= i;

    printf("The factorial of %d is: %d.", n, factorial);

    return 0;
}
