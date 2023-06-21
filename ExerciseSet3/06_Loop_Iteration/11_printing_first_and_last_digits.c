/*
Write a C program to input a number from user and find first and last digit of number using loop.
How to find first and last digit of a number in C programming.
Logic to find first and last digit of a given number without using loop in C program.
*/

#include <stdio.h>

int main(){

	int first, last, number;

	printf("Enter the value of n:\n");
	scanf("%d", &number);

	last = number % 10;

	while(number > 10) number /= 10;
	first = number;

	printf("The first digit is: %d, the last digit is: %d.",first, last);

	return 0;
}
