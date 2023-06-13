/*
Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle.
How to calculate diameter, circumference and area of a circle whose radius is given by user in C programming.
Logic to find diameter, circumference and area of a circle in C.
 */

#include <stdio.h>
#include <math.h>

int main(){
	double radius, diameter, circumference, area;

	printf("Enter the radius of the circle:  ");
	scanf("%lf", &radius);

	diameter = 2 * radius;
	circumference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);

	printf("The diameter is: %.2lf meters.\n", diameter);
	printf("The circumference is: %.2lf meters.\n", circumference);
	printf("The area is: %.2lf squaremeters.\n", area);

	return 0;
}

