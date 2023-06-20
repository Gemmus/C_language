/*
Write a C program to find all roots of a quadratic equation using if else.
How to find all roots of a quadratic equation using if else in C programming.
Logic to find roots of quadratic equation in C programming.
*/

#include <stdio.h>
#include <math.h>

int main(void){

	double a, b, c, root1, root2, imaginary, discriminant;

	printf("Enter a :\n");
	scanf("%lf", &a);
	printf("Enter b:\n");
	scanf("%lf", &b);
	printf("Enter c:\n");
	scanf("%lf", &c);

	discriminant = pow(b, 2) - 4 * a * c;

	if(discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct and real roots exists: %.2lf and %.2lf.", root1, root2);
	}
	else if(discriminant < 0){
		root1 = root2 = -b / (2 * a);
		imaginary = sqrt(-discriminant) / (2 * a);
		printf("Two distinct complex roots exists: %.2lf + i%.2f and %.2lf - i%.2lf.", root1, imaginary, root2, imaginary);

	}
	else{
        root1 = root2 = -b / (2 * a);
        printf("Two equal and real roots exists: %.2lf and %.2lf.", root1, root2);
	}

	return 0;
 }
