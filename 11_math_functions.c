#include <stdio.h>
#include <math.h>

int main11(void) {

	double A = sqrt(9);
	printf("A = %lf\n", A);

	double B = pow(2, 4);
	printf("B = %lf\n", B);


	int C = round(3.14);
	printf("C = %d\n", C);
	int D = ceil(3.14); // round up
	printf("D = %d\n", D);
	int E = floor(3.99); // round down
	printf("E = %d\n", E);

	double F = fabs(-100); // find absolute number
	printf("F = %lf\n", F);
	double G = log(3); // find the logarithm of a number
	printf("G = %lf\n", G);
	double H = sin(45 * M_PI / 180); // find sin
	printf("H = %lf\n", H);
	double I = cos(45 * M_PI / 180); // find cos
	printf("I = %lf\n", I);
	double J = tan(45 * M_PI / 180); // find tan
	printf("J = %lf\n", J);

	return 0;
}
