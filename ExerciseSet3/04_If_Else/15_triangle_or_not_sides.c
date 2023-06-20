/*
Write a C program to input side of a triangle and check whether triangle is valid or not using if else.
How to check whether a triangle can be formed or not if sides of triangle is given using if else in C programming.
Logic to check triangle validity if sides are given in C program.
*/

#include <stdio.h>

int main(void){

	int side1, side2, side3;

	printf("Enter the angles of the triangle:\n");
	scanf("%d%d%d", &side1, &side2, &side3);

	if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) printf("The triangle is valid based on the parameters of the sides.");
	else printf("Invalid triangle parameters.");

	return 0;
 }
