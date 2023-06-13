/*
Write a C Program to input two angles from user and find third angle of the triangle.
How to find all angles of a triangle if two angles are given by user using C programming.
C program to calculate the third angle of a triangle if two angles are given.
 */

#include <stdio.h>

int main(){

	double a, b, c;

	printf("Enter the two known angles:\n");
	scanf("%lf%lf", &a, &b);


	c = 180 - a - b;

	printf("The third angle is %.2lf degree.", c);

	return 0;
}

