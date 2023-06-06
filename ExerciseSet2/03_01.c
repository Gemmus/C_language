// Write a program that first asks the user for an integer and after that,
// a floating-point number. Finally, the program prints both numbers on the screen.
// The floating-point number shall be printed with two decimal places of precision.

#include <stdio.h>

int main3_1(void){

	int num1;
	float num2;

	printf("Enter an integer:  ");
	scanf("%d", &num1);

	printf("Enter a floating-point number:  ");
	scanf("%f", &num2);

	printf("Integer number: %d, floating number: %.2f.\n", num1, num2);

	return 0;
}
