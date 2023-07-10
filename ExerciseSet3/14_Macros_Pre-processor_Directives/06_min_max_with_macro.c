/*
Write a C program to find maximum and minimum of two numbers using macro.
How to find maximum or minimum between two numbers using macro in C program.
Logic to find maximum and minimum using macro in C.
*/

#include <stdio.h>
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

int main()
{
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    printf("The smaller number is: %d.\n", MIN(num1, num2));
    printf("The larger number is: %d.\n", MAX(num1, num2));

    return 0;
}
