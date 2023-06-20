/*
Write a C program to find all roots of a Quadratic equation using switch case.
How to find all roots of a quadratic equation using switch case in C programming.
Logic to calculate roots of quadratic equation in C program.
*/

#include <stdio.h>
#include <math.h>

int main(){

	double a, b, c, root1, root2, imaginary, discriminant;

	printf("Enter a :\n");
	scanf("%lf", &a);
	printf("Enter b:\n");
	scanf("%lf", &b);
	printf("Enter c:\n");
	scanf("%lf", &c);

	discriminant = pow(b, 2) - 4 * a * c;

	switch(discriminant > 0)
	    {
	        case 1:
	            root1 = (-b + sqrt(discriminant)) / (2 * a);
	            root2 = (-b - sqrt(discriminant)) / (2 * a);
	            printf("Two distinct and real roots exists: %.2lf and %.2lf.", root1, root2);
	            break;
	        case 0:
	            switch(discriminant < 0)
	            {
	                case 1:
	                    root1 = root2 = -b / (2 * a);
	                    imaginary = sqrt(-discriminant) / (2 * a);
	                    printf("Two distinct complex roots exists: %.2lf + i%.2f and %.2lf - i%.2lf.", root1, imaginary, root2, imaginary);
	                    break;
	                case 0:
	                    root1 = root2 = -b / (2 * a);
	                    printf("Two equal and real roots exists: %.2lf and %.2lf.", root1, root2);
	                    break;
	            }
	    }

	return 0;
}
