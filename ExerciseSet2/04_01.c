// Write a program that prompts the user for two integers
// and prints the sum, difference and product of the numbers on the screen.

#include <stdio.h>

int main4_1(void){

	int num1;
	int num2;

	printf("Enter first integer: ");
	scanf("%d", &num1);
	printf("Enter second integer: ");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);

	return 0;
}
