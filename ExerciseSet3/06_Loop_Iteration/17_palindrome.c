/*
Write a C program to input number from user and check number is palindrome or not using loop.
How to check whether a number is palindrome or not using loop in C programming.
Logic to check palindrome number in C programming.
*/

#include <stdio.h>

int main(){

	int number, temp, reverse = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	temp = number;

	while(temp != 0)
	{
		reverse = (reverse * 10) + (temp % 10);
		temp /= 10;
	}

	if(number == reverse) printf("%d == %d, it's a palindrome.", number, reverse);
	else printf("%d != %d, it isn't a palindrome.", number, reverse);

	return 0;
}
