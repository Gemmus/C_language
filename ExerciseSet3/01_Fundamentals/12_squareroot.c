/*
Write a C program to input a number and find square root of the given number.
How to find square root of a number in C programming using inbuilt sqrt() function.
How to use predefined sqrt() function to find square root in C program.
 */

#include <stdio.h>
#include <math.h>

int main(){

	double number;

	printf("Enter the number:  ");
	scanf("%lf", &number);


	double result = sqrt(number);

	printf("The squareroot of %.2lf is %.2lf.", number, result);

	return 0;
}

