/*
Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
How to convert temperature from Fahrenheit to Celsius in C programming. C program for temperature conversion.
Logic to convert temperature from Fahrenheit to Celsius in C program.
 */

#include <stdio.h>
#include <math.h>

int main(){
	double celcius, fahrenheit;

	printf("Enter the value in Fahrenheit:  ");
	scanf("%lf", &fahrenheit);

	celcius = (fahrenheit - 32) * 5 / 9;

	printf("%.2lf Fahrenheit is %.2lf Celcius.\n", fahrenheit, celcius);

	return 0;
}

