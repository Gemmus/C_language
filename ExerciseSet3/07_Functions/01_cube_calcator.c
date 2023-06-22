/*
Write a C program to input any number from user and find cube of the given number using function.
How to find cube of a given number using function in C programming.
Write a C function to find cube of a given number.
*/

#include <stdio.h>
#include <math.h>

double cube(int i);

int main()
{
    int num;
    double result;

    printf("Enter the number : ");
    scanf("%d", &num);

    result = cube(num);
    printf("The cube of %d is %.2lf.", num, result);

    return 0;
}

double cube(int n)
{
    return pow(n, 3);
}
