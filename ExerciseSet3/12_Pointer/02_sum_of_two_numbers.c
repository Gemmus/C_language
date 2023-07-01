/*
Write a C program to read two numbers from user and add them using pointers.
How to find sum of two number using pointers in C programming.
Program to perform arithmetic operations on number using pointers.
*/

#include <stdio.h>

int main()
{
	int num1, num2;
	int * ptr1, * ptr2;

	printf("Enter first number:\n");
	scanf("%d", &num1);
	printf("Enter second number:\n");
	scanf("%d", &num2);

	ptr1 = &num1;
	ptr2 = &num2;

	printf("Sum of the two numbers: %d.", *ptr1 + *ptr2);

  	return 0;
}
