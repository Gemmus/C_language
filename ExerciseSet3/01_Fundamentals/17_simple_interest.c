/*
Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
How to calculate simple interest in C programming.
Logic to find simple interest in C program.
 */

#include <stdio.h>

int main(){

	double principle, time, rate, simple_int;

	printf("Enter the principle:\n");
	scanf("%lf", &principle);

	printf("Enter the time:\n");
	scanf("%lf", &time);

	printf("Enter the rate:\n");
	scanf("%lf", &rate);

	simple_int = (principle * time* rate )/ 100;

	printf("The simple interest is: %.2lf.", simple_int);

	return 0;
}
