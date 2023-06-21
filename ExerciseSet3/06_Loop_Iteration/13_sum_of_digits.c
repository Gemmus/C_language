/*
Write a C program to input a number and calculate sum of digits using for loop.
How to find sum of digits of a number in C program.
Logic to find sum of digits of a given number in C programming.
*/

#include <stdio.h>

int main(){

	int number, sum = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	do{
		sum += number % 10;
		number /= 10;
	}while(number != 0);

	printf("The sum of the digits of the number is: %d.", sum);

	return 0;
}
