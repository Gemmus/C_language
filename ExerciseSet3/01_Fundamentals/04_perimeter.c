/*
Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle.
How to find perimeter of a rectangle in C programming.
Logic to find the perimeter of a rectangle if length and width are given in C programming.
 */

#include <stdio.h>

int main(){
	double side1, side2;

	printf("Enter side A of the rectangle:  ");
	scanf("%lf", &side1);

	printf("Enter side B of the rectangle:  ");
	scanf("%lf", &side2);

	printf("The perimeter is: %.2lf meters.", (side1 + side2) * 2);

	return 0;
}

