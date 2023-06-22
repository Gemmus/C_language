/*
Write a C program to input radius of circle from user and find diameter, circumference and area of the given circle using function.
How to find diameter, circumference and area of a circle using function in C programming.
*/

#include <stdio.h>
#include <math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main()
{
    double radius, diameter, circumference, area;

    printf("Enter the radius of the circle:\n");
    scanf("%lf", &radius);

    diameter = getDiameter(radius);
    circumference = getCircumference(radius);
    area = getArea(radius);

    printf("The diameter is %.2lf m, the circumference is %.2lf m and the area is %.2lf m².", diameter, circumference, area);

    return 0;
}

double getDiameter(double radius){
	return radius * 2;
}

double getCircumference(double radius){
	return 2 * M_PI * radius;
}

double getArea(double radius){
	return M_PI * pow(radius, 2);
}
