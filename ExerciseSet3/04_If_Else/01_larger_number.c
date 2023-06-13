/*
Write a C program to find maximum between two numbers using if else.
C program to input two numbers from user and find maximum between two numbers using if else.
How to find maximum or minimum between two numbers using if else in C programming.
 */

#include <stdio.h>

int main(){

	int num1, num2;

	printf("Enter two integer numbers:\n");
	scanf("%d%d", &num1, &num2);

	if(num1 > num2) printf("%d is the larger number.", num1);
	else if(num2 > num1) printf("%d is the larger number.", num2);
	else if(num1 == num2) printf("The numbers are equally large.");

	return 0;
}
