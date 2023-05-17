#include <stdio.h>

int main8(void) {
	int x = 5;
	int y = 2;

	int addition = x + y;
	printf("%d\n", addition);

	int subtraction = x - y;
	printf("%d\n", subtraction);

	int multiplication = x * y;
	printf("%d\n", multiplication);

	// int division = x / y; --> returns a 2
	//float division = x / y; --> still returns a 2

	//solution (a): either y needs to be changed to float or double
	// or
	//solution (b): convert int into float or double:
	float division = x / (float) y;
	printf("%f\n", division);

	int modulus = x % y;
	printf("%d\n", modulus);

	// increment:
	x++;
	printf("%d\n", x);

	// decrement:
	y--;
	printf("%d\n", y);

	return 0;
}
