// C program to find the sum of the digits of an integer using a while loop

#include <stdio.h>

int main12() {

	int number, digit, sum = 0;

	printf("Enter an integer:  ");
	scanf("%d", &number);

	while(number != 0){
		digit = number % 10;
		sum += digit;
		number /= 10;
	}

	printf("The sum of the digit of the integers: %d.", sum);

	return 0;
}

