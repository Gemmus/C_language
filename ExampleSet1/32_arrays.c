#include <stdio.h>

int main32(void){

	double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};
	printf("$%.2f", prices[1]);

	double set_array_size[20]; // maximum 20 elements
	set_array_size[0] = 2.0;
	set_array_size[1] = 8.0;

	printf("\n$%.2f", set_array_size[0]);
	printf("\n$%.2f", set_array_size[1]);

	double price_tags[10] = {5.0, 10.0, 15.0, 20.0, 25.0};
	price_tags[5] = 30.0;
	printf("\n$%.2f", price_tags[5]);

	return 0;
}
