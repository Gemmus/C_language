/*
Write a C program to input a number from user and calculate product of its digits.
How to find product of digits of a number using loop in C programming.
Logic to find product of digits of a given number in C program.
*/

#include <stdio.h>

int main(){

	int number, sum = 1;

	printf("Enter a number:\n");
	scanf("%d", &number);

	do{
		sum *= number % 10;
		number /= 10;
	}while(number != 0);

	printf("The product of the digits of the number is: %d.", sum);

	return 0;
}
