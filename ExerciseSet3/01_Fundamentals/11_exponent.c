/*
Write a C program to input two numbers from user and find their power using pow() function.
How to find power of a number in C programming.
How to use pow() function in C programming.
 */

#include <stdio.h>
#include <math.h>

int main(){

	int base, exponent;

	printf("Enter the base:  ");
	scanf("%d", &base);

	printf("Enter the number:  ");
	scanf("%d", &exponent);

	int result = pow(base, exponent);

	printf("%d ^ %d = %d", base, exponent, result);

	return 0;
}

