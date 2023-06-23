/*
Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0).
How to check whether nth bit of a given number is set or unset using bitwise operator in C programming.
C program to get the status of nth bit of a number.
*/

#include <stdio.h>

int main()
{
    int number, n, bit_status;

    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    bit_status = (number >> n) & 1; // Right shift number n times and perform bitwise AND with 1
    printf("The %d bit is set to %d.", n, bit_status);

    return 0;
}
