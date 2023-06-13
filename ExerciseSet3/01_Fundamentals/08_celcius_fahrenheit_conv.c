/*
Write a C program to input temperature in Centigrade and convert to Fahrenheit.
How to convert temperature from degree centigrade to degree Fahrenheit in C programming.
Logic to convert temperature from Celsius to Fahrenheit in C.
 */

#include <stdio.h>
#include <math.h>

int main(){
	double celcius, fahrenheit;

	printf("Enter the value in Celcius:  ");
	scanf("%lf", &celcius);

	fahrenheit = (celcius * 9 / 5) + 32;

	printf("%.2lf Celcius is %.2lf Fahrenheit.\n", celcius, fahrenheit);

	return 0;
}

