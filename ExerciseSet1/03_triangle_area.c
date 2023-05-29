// C program to find the area of a triangle whose three sides are given

#include <stdio.h>
#include <math.h>

int main(void){

	double a;
	double b;
	double c;

	printf("Enter side a:  ");
	scanf("%lf", &a);

	printf("Enter side a:  ");
	scanf("%lf", &b);

	printf("Enter side a:  ");
	scanf("%lf", &c);

	if((a + b) > c && (b + c) > a && (a + c) > b){
		double semiperimeter = (a + b + c ) / 2;
		double area = sqrt(semiperimeter * (semiperimeter - a)  *(semiperimeter - b) * (semiperimeter - c));
		printf("The area of the triangle is: %.2lf squaremetres.\n", area);
	}
	else{
		printf("The triangle does not exist with given parameters.\n");
	}

	return 0;
}
