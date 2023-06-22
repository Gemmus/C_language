/*
Write a C program to input a number from user and print it into words using for loop.
How to display number in words using loop in C programming.
Logic to print number in words in C programming.
*/

#include <stdio.h>

int main(){

	int number, reverse = 0, digit;

	printf("Enter a number:\n");
	scanf("%d", &number);

	while(number != 0)
	{
		reverse = (reverse * 10) + (number % 10);
		number /= 10;
	}

	while(reverse != 0){
		digit = reverse % 10;
		switch(digit){
		case 0:
			printf("zero ");
			break;
		case 1:
			printf("one ");
			break;
		case 2:
			printf("two ");
			break;
		case 3:
			printf("three ");
			break;
		case 4:
			printf("four ");
			break;
		case 5:
			printf("five ");
			break;
		case 6:
			printf("six ");
			break;
		case 7:
			printf("seven ");
			break;
		case 8:
			printf("eight ");
			break;
		case 9:
			printf("nine ");
			break;
		}
		reverse /= 10;
	}

	return 0;
}
