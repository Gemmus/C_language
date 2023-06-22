/*
Write a C program to input a number and check whether the number is Perfect number or not.
How to check perfect number in C programming using loop.
Logic to check perfect number in C programming.

Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.
*/

#include <stdio.h>

int main()
{
	int number, sum = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	for(int i = 1; i <= number; i++){
		if(number % i == 0) sum += i;
	}

	if(number == sum) printf("%d is a perfect number.", number);
	else printf("%d is not a perfect number.", number);

    return 0;
}
