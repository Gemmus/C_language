/*
Write a C program to convert uppercase string to lowercase using for loop.
How to convert uppercase string to lowercase without using inbuilt library function strlwr().
How to convert string to lowercase using strlwr() string function.
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
		*ptr = (*ptr >= 'A' && *ptr <= 'Z') ? *ptr + 32 : *ptr;
		ptr++;
	}

	printf("Uppercase string : %s", input);

	return 0;
}

