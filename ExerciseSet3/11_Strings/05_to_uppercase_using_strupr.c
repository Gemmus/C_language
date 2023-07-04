/*
Write a C program to convert string from lowercase to uppercase string using loop.
How to convert string from lowercase to uppercase using for loop in C programming.
C program to convert lowercase to uppercase string using strupr() string function.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE];

	printf("Enter your text:\n");
	gets(input);

	printf("Uppercase string : %s", strupr(input));

	return 0;
}
