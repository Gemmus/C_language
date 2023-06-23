/*
Write a C program to input any number from user and set nth bit of the given number as 1.
How to set nth bit of a given number using bitwise operator in C programming.
Setting nth bit of a given number using bitwise operator.

Steps:
1. Input number from user. Store it in some variable say num.
2. Input bit position you want to set. Store it in some variable say n.
3. To set a particular bit of number. Left shift 1 n times and perform bitwise OR operation with num. Which is newNum = (1 << n) | num;
*/

#include <stdio.h>

int main()
{
    int number, n, newNumber;

    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the value of n to be set (0-31):\n");
    scanf("%d", &n);

    newNumber = (1 << n) | number; // Left shift 1, n times and perform bitwise OR with number
    printf("Number before setting %d bit: %d (in decimal)\n", n, number);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNumber);

    return 0;
}
