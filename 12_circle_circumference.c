#include <stdio.h>

int main12(void) {

	const double PI = 3.14159;
	double radius;

	printf("Enter the radius of the circle in metre:  ");
	scanf("%lf", &radius);

	double circumference = 2 * PI * radius;

	printf("The circumference of a %.0lf m radius circle: %.1lf square metres.", radius, circumference);

	return 0;

}
