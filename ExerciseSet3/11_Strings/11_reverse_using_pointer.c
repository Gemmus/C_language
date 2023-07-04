/*
Write a C program to find reverse of a given string using loop.
How to find reverse of any given string using loop in C programming.
Logic to find reverse of a string without using strrev() function in C.
C program to reverse a string using strrev() string function.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE], reverse[MAX_SIZE];
	char *iPtr = input;
	char *rPtr = reverse;
	int len = 0;

	printf("Enter your text:\n");
	gets(input);

	while(*(iPtr++)) len++;

	iPtr--;
	while(len >= 0)
	{
		*(rPtr++) = *(--iPtr);
	    len--;
	}

	*rPtr = '\0';

	printf("Reverse string: %s.", reverse);

	return 0;
}
