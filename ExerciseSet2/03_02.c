// Write a program that prompts the user for an amount in Finnish markka and converts it to euro.
// Finally, the program prints the amount on the screen in euro with two decimal places of precision.
// The euro conversion factor is 5.94573.

#include <stdio.h>

int main3_2(void){

	float markka;
	float euro;
	float convertion_factor = 5.94573;

	printf("Enter the sum in Finnish markka:  ");
	scanf("%f", &markka);

	euro = markka * convertion_factor;

	printf("%.2f Finnish markka is €%.2f.\n", markka, euro);

	return 0;
}
