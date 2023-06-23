/*
Write a C program to input a number from user and find power of given number using recursion.
How to find power of a number using recursive function in C programming.
Logic to find power of a number using recursion in C programming.
*/

#include <stdio.h>

double pow(double base, int exponent);

int main()
{
    double base, result;
    int exponent;


    printf("Enter the base:\n");
    scanf("%lf", &base);
    printf("Enter the exponent:\n");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf("%.2lf on the power of %d is: %.2lf.", base, exponent, result);

    return 0;
}

double pow(double base, int exponent){

	if(exponent == 0) return 1;
	else if(exponent > 0) return base * pow(base, exponent - 1);
	else return 1/ pow(base, -exponent);
}
