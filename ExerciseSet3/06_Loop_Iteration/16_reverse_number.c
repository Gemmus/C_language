/*
Write a C program to input a number from user and find reverse of the given number using for loop.
How to find reverse of any number using loop in C program.
Logic to find reverse of a number in C programming.
*/

#include <stdio.h>

int main(){

	int number, reverse = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	while(number != 0)
	{
		reverse = (reverse * 10) + (number % 10);
		number /= 10;
	}

	printf("The number in reversed order is: %d.", reverse);

	return 0;
}
