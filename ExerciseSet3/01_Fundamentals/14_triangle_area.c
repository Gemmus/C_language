/*
Write a C program to input base and height of a triangle and find area of the given triangle.
How to find area of a triangle in C programming.
Logic to find area of a triangle in C program.
 */

#include <stdio.h>

int main(){

	double base, height, area;

	printf("Enter the base:\n");
	scanf("%lf", &base);

	printf("Enter the height:\n");
	scanf("%lf", &height);

	area = height * base / 2;

	printf("The area of the triangle is %.2lf squaremeters.", area);

	return 0;
}

