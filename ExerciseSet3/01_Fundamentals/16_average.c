/*
Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects.
How to calculate total, average and percentage in C programming.
Logic to find total, average and percentage in C program.
 */

#include <stdio.h>

int main(){

	double sub1, sub2, sub3, sub4, sub5, total, average, percentage;

	printf("Enter the marks of the five subjects:\n");
	scanf("%lf%lf%lf%lf%lf", &sub1, &sub2, &sub3, &sub4, &sub5);

	total = sub1 + sub2 + sub3 + sub4 + sub5;
	average = total / 5;
	percentage = total / 500 * 100;

	printf("Total: %.2lf\tAverage: %.2lf\tPercentage: %.2lf", total, average, percentage);

	return 0;
}

