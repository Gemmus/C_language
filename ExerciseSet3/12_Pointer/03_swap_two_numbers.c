/*
Write a C program to swap two numbers using pointers and functions.
How to swap two numbers using call by reference method.
Logic to swap two number using pointers in C program.
*/

#include <stdio.h>

int main()
{
	int num1, num2, temp;
	int * ptr1, * ptr2;

	printf("Enter first number:\n");
	scanf("%d", &num1);
	printf("Enter second number:\n");
	scanf("%d", &num2);

	ptr1 = &num1;
	ptr2 = &num2;

	printf("The original num1: %d and the original num2: %d.\n", *ptr1, *ptr2);

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("The new num1: %d and the new num2: %d.\n", *ptr1, *ptr2);

    return 0;
}
