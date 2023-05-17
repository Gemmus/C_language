#include <stdio.h>

int main6(void){
	float item1 = 5.75;
	float item2 = 10.00;
	float item3 = 100.99;

	// %.1 = decimal precision
	// %1 = minimum field width
	// %- = left align

	// printf("Item 1: $%f\n", item1); --> Prints: $5.750000
	// printf("Item 1: $%8.2f\n", item1); --> 8 digit space reserved from the right, Prints: $    5.75
	printf("Item 1: $%-8.2f\n", item1); // --> 8 digit space reserved from the left
	printf("Item 1: $%-8.2f\n", item2);
	printf("Item 1: $%-8.2f\n", item3);

	return 0;
}
