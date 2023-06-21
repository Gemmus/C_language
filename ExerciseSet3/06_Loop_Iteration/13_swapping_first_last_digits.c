/*
Write a C program to input a number from user and swap first and last digit of the given number.
How to swap first and last digits of a number in C programming.
Logic to swap first and last digit of a number in C program.
*/

#include <stdio.h>
#include <math.h>

int main(){

	int first, last, number, digits = 0, temp, swapped;

	printf("Enter a number:\n");
	scanf("%d", &number);

	last = number % 10;

	temp = number;
	while(temp > 10)
	{
		digits++;
		temp /= 10;
	}
	first = temp;

	swapped = last;
	swapped *= (int)round(pow(10, digits));
	swapped += number % ((int)round(pow(10, digits)));
	swapped -= last;
	swapped += first;

	printf("Number with swapping first and last digit: %d", swapped);

	return 0;
}
