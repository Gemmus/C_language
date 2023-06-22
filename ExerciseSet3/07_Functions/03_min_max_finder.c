/*
Write a C program to input two numbers from user and find maximum and minimum of the given numbers using functions.
How to find maximum and minimum of two or more numbers using functions in C programming.
*/

#include <stdio.h>
#include <math.h>

double minFinder(double num1, double num2);
double maxFinder(double num1, double num2);

int main()
{
    double num1, num2, max, min;

    printf("Enter the first and the second number:\n");
    scanf("%lf%lf", &num1, &num2);

    min = minFinder(num1, num2);
    max = maxFinder(num1, num2);

    printf("%.2lf is the smaller number.\n", min);
    printf("%.2lf is the larger number.", max);

    return 0;
}

double minFinder(double num1, double num2){
	return (num1 > num2) ? num2 : num1;
}

double maxFinder(double num1, double num2){
	return (num1 > num2) ? num1 : num2;
}
