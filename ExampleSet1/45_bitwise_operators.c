// Bitwise Operators:
// Special operators used in bit level programming

// & = AND
// | = OR
// ^ = XOR
// << left shift
// >> right shift

#include <stdio.h>

int main45(void){
	int x = 6;  //  6 = 000110
	int y = 12; // 12 = 001100
	int z = 0;  //  0 = 000000

	z = x & y;
	printf("AND = %d\n", z); // z = 000100 (if both is 1)

	z = x | y;
	printf("OR = %d\n", z); // z = 001110 (if either is 1)

	z = x ^ y;
	printf("XOR = %d\n", z); // z = 001010 (if only one is 1)

	z = x << 2;
	printf("LEFT SHIFT = %d\n", z); // z = 011000 (left shifted with two, with every each shift to the left, the number doubles)

	z = x >> 1;
	printf("RIGHT SHIFT = %d\n", z); // z = 000011 (if only one is 1, with every each shift to the right, the number is halved, and eventually truncated as 0.5 is not stored)


	return 0;
}
