/*
Write a C program to print all Armstrong numbers between 1 to n.
How to print Armstrong numbers between given interval using loop in C program.
Logic to print Armstrong numbers in given range in C programming.

An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example:
6 = 6¹ = 6
371 = 3³ + 7³ + 1³ = 371
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int input, temp, digits, last, sum;

	printf("Enter a number:\n");
	scanf("%d", &input);

	for(int number = 1; number <= input; number++){
		temp = number;
		digits = 0;
		sum = 0;

		do{
			digits++;
			temp /= 10;
		}while(temp != 0);

		temp = number;

		while(temp != 0){
			last = temp % 10;
			sum += pow(last, digits);
			temp /= 10;
		}

		if(number == sum) printf("%d ", number);
	}

    return 0;
}
