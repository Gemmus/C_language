/*
Write a C program to input length in centimeter and convert it to meter and kilometer.
How to convert length from centimeter to meter and kilometer in C programming.
Length conversion program in C from centimeter to meter and centimeter to kilometer.
 */

#include <stdio.h>
#include <math.h>

int main(){
	double centimeter, meter, kilometer;

	printf("Enter the value in centimeters:  ");
	scanf("%lf", &centimeter);

	meter = centimeter / 100;
	kilometer = meter / 1000;

	printf("The entered value is: %.10lf meters.\n", meter);
	printf("The entered value is: %.10lf kilometers.\n", kilometer);

	return 0;
}

