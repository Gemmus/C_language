/*
Write a C program to input a number from user and check whether given number is Armstrong number or not.
How to check Armstrong numbers in C program.
Logic to check Armstrong numbers in C programming.

An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example:
6 = 6¹ = 6
371 = 3³ + 7³ + 1³ = 371
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int number, temp, digits = 0, last, sum = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	temp = number;

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

	if(number == sum) printf("%d == %d, it's an Armstrong number.", number, sum);
	else printf("%d != %d, it's not an Armstrong number.", number, sum);

    return 0;
}
