// Write a program that prompts the user for an integer and checks whether it is even or odd.
// If the number is even, print the value 0, and if it is odd, print the value 1.

#include <stdio.h>

int main4_2(void){

	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	printf("%d\n", number % 2);

	return 0;
}
