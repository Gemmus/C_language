// C program to find the circumference and area of a circle with a given radius

#include <stdio.h>
#include <math.h>

int main(void){

	double radius;

	printf("Enter the radius:  ");
	scanf("%lf", &radius);

	double circumference = 2 * M_PI * radius;
	double area = M_PI * pow(radius, 2);

	printf("The circumference of the circle is: %.2lf metres.\n", circumference);
	printf("The area of the circle is: %.2lf squaremetres.\n", area);

	return 0;
}
