/*
Write a C program to check whether a triangle is valid or not if angles are given using if else.
How to check whether a triangle can be formed or not, if its angles are given using if else in C programming.
Logic to check triangle validity if angles are given in C program.
*/

#include <stdio.h>

int main(void){

	int angle1, angle2, angle3;

	printf("Enter the angles of the triangle:\n");
	scanf("%d%d%d", &angle1, &angle2, &angle3);

	if((angle1 + angle2 + angle3 == 180) && (angle1 > 0) && (angle2 > 0) && (angle3 > 0)) printf("The triangle is valid based on the parameters of the angles.");
	else printf("Invalid triangle parameters.");

	return 0;
 }
