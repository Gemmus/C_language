#include <stdio.h>

// double refers to the returned data type
double square23(double x){
	return x * x;
}

int main23() {

	double x = square23(3.14);
	printf("%lf", x);

	return 0;
}
