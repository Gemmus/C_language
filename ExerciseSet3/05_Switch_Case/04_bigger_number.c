/*
Write a C program to input two numbers from user and find maximum between two numbers using switch case.
How to find maximum or minimum between two numbers using switch case.
Logic to find maximum between two numbers using switch case in C programming.
*/

#include <stdio.h>

int main(){

	int num1, num2;

	printf("Enter first number:\n");
	scanf("%d", &num1);
	printf("Enter second number:\n");
	scanf("%d", &num2);

	switch(num1 > num2){
	default:
		printf("Invalid input.");
		break;
	case 0:
		printf("%d is bigger than %d.", num2, num1);
		break;
	case 1:
		printf("%d is bigger than %d.", num1, num2);
		break;
	}

	return 0;
}
