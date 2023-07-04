/*
Write a C program to convert string from lowercase to uppercase string using loop.
How to convert string from lowercase to uppercase using for loop in C programming.
C program to convert lowercase to uppercase string using strupr() string function.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE];
	char * ptr = input;

	printf("Enter your text:\n");
	gets(input);

	while(*ptr)
	{
		*ptr = (*ptr >= 'a' && *ptr <= 'z') ? *ptr - 32 : *ptr;
		ptr++;
	}

	printf("Uppercase string : %s", input);

	return 0;
}
