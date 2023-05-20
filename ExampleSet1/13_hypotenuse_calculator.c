#include <stdio.h>
#include <math.h>

int main13(void) {

	double a, b, c;

	printf("Enter side \"a\" in metre:  ");
	scanf("%lf", &a);

	printf("Enter side \"b\"  in metre:  ");
	scanf("%lf", &b);

	c = sqrt(pow(a, 2) + pow(b, 2));

	printf("The hypotenuse is %.1lf m.", c);

	return 0;
}
