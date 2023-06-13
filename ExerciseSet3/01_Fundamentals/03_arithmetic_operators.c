/*
Write a C program to input two numbers and perform all arithmetic operations.
How to perform all arithmetic operation between two numbers in C programming.
C program to find sum, difference, product, quotient and modulus of two given numbers.
 */

#include <stdio.h>

int main(){
	int num1, num2;

	printf("Enter a number:  ");
	scanf("%d", &num1);

	printf("Enter a number:  ");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}

