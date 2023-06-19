/*
Write a C program to check positive, negative or zero using simple if or if else.
C program to input any number from user and check whether the given number is positive, negative or zero.
Logic to check negative, positive or zero in C programming.
*/

#include <stdio.h>

int main(){

	int num;

	printf("Enter a number:\n");
	scanf("%d", &num);

	if(num > 0) printf("%d is a positive number.", num);
	else if(num < 0) printf("%d is a negative number.", num);
	else if(num == 0) printf("%d is a zero.", num);
	return 0;
}
