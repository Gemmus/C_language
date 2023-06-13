/*
Write a C program to input any number from user and check whether Most Significant Bit (MSB) of given number is set (1) or not (0).
How to check whether Most Significant Bit of any given number is set or not using bitwise operator in C programming.
C program to get the status of the most significant bit of a number.
 */

#include <stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer.

int main(){

	int number, msb;

	printf("Enter an integer:  ");
	scanf("%d", &number);

	msb = 1 << (BITS - 1); // Move first bit of 1 to highest order.

	if(number & msb) printf("MSB of %d is set (1).", number); // = ((num & msb) == 1)
    else printf("MSB of %d is unset (0).", number);

	return 0;
}
