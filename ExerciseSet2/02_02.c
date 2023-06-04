// Write a program that prompts the user for an integer,
// calculates the square and prints the result on the screen
// (also print out a newline character \n after the result).
// After printing, the program closes itself.

#include <stdio.h>
#include <math.h>

int main2_2(void){

	int number;

	printf("Enter an integer:  ");
	scanf("%d", &number);

	int square = pow(number, 2);
	printf("The square of %d is: %d.\n", number, square);

	return 0;
}
