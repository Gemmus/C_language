/*
Write a C program to input length and width of a rectangle and find area of the given rectangle. 
How to calculate area of a rectangle in C programming. 
Logic to find area of a rectangle whose length and width are given in C programming.
 */

#include <stdio.h>

int main(){
	double side1, side2;

	printf("Enter side A of the rectangle:  ");
	scanf("%lf", &side1);

	printf("Enter side B of the rectangle:  ");
	scanf("%lf", &side2);

	printf("The area is: %.2lf squaremeters.", side1 * side2);

	return 0;
}

