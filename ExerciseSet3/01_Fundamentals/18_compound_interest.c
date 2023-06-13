/*
Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest.
How to calculate compound interest in C programming.
Logic to calculate compound interest in C program.
 */

#include <stdio.h>
#include <math.h>

int main(){

	double principle, time, rate, compound_int;

	printf("Enter the principle:\n");
	scanf("%lf", &principle);

	printf("Enter the time:\n");
	scanf("%lf", &time);

	printf("Enter the rate:\n");
	scanf("%lf", &rate);

	compound_int = principle * pow((1 + rate / 100), time);

	printf("The compound interest is: %.2lf.", compound_int);

	return 0;
}
