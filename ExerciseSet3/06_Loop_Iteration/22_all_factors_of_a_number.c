/*
Write a C program to input a number from user and find all factors of the given number using for loop.
How to find factors of a number in C program.
Logic to find all factors of a given number in C programming.

Factor of any number is a whole number which exactly divides the number into a whole number without leaving any remainder.
For example: 2 is a factor of 6 because 2 divides 6 exactly leaving no remainder.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number:\n");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
    	if(number % i == 0) printf("%d, ", i);
    }

    return 0;
}
