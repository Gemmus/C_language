/*
Write a C program to input two numbers and find maximum between two numbers using conditional/ternary operator ?:.
How to find maximum or minimum between two numbers using conditional operator in C program.
 */

#include <stdio.h>

int main(){
	int num1, num2, max;

	printf("Enter a number:  ");
	scanf("%d", &num1);

	printf("Enter a number:  ");
	scanf("%d", &num2);

	max = (num1 > num2) ? num1 : num2;

	printf("%d is the larger number.", max);

	return 0;
}
