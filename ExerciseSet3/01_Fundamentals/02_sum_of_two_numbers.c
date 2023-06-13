/*
Write a C program to input two numbers from user and calculate their sum.
C program to add two numbers and display their sum as output.
How to add two numbers in C programming.
 */

#include <stdio.h>

int main(){
	int num1, num2;

	printf("Enter a number:  ");
	scanf("%d", &num1);

	printf("Enter a number:  ");
	scanf("%d", &num2);

	printf("%d + %d = %d", num1, num2, num1 + num2);

	return 0;
}

