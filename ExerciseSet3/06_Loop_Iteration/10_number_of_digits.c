/*
Write a C program to input a number from user and count number of digits in the given integer using loop.
How to find total digits in a given integer using loop in C programming.
Logic to count digits in a given integer without using loop in C program.
*/

#include <stdio.h>

int main(){

	int count = 0, number, temp;

	printf("Enter the value of n:\n");
	scanf("%d", &number);

	temp = number;

	do{
		count++;
		temp /= 10;
	}while(temp != 0);

	printf("%d has %d digit(s).", number, count);

	return 0;
}
