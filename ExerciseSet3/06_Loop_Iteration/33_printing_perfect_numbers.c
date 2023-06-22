/*
Write a C program to find all Perfect numbers between 1 to n. C program to find all perfect numbers between given range.
How to generate all perfect numbers between given interval using loop in C programming.
Logic to find all perfect numbers in a given range in C programming.

Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.
*/

#include <stdio.h>

int main()
{
	int number, sum;

	printf("Enter a number:\n");
	scanf("%d", &number);

	for(int i = 2; i <= number; i++){
		sum = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0) sum += j;
		}

		if(i == sum) printf("%d, ", i);
	}

    return 0;
}
