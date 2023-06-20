/*
Write a C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.
How to check whether a triangle is equilateral, scalene or isosceles triangle in C programming.
Logic to classify triangles as equilateral, scalene or isosceles triangle if sides are given in C program.

Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only if a == b == c.
Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.
Scalene Triangle, if none of its sides are equal.
*/

#include <stdio.h>

int main(void){

	int side1, side2, side3;

	printf("Enter the angles of the triangle:\n");
	scanf("%d%d%d", &side1, &side2, &side3);

	if((side1 == side2) && (side1 == side3) && (side2 == side3 )) printf("The triangle is equilateral.");
	else if((side1 == side2) || (side1 == side3) || (side2 == side3 )) printf("The triangle is isosceles.");
	else printf("The triangle is scalene.");

	return 0;
 }
