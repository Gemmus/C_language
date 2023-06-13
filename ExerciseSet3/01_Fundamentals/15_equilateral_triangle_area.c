/*
Write a C program to input side of an equilateral triangle from user and find area of the given triangle.
How to find area of an equilateral triangle in C programming.
C program to calculate area of an equilateral triangle if its side is given.
 */

#include <stdio.h>
#include <math.h>

int main(){

	double side, area;

	printf("Enter the side:\n");
	scanf("%lf", &side);

	area = sqrt(3) / 4 * pow(side, 2);

	printf("The area of the triangle is %.2lf squaremeters.", area);

	return 0;
}

