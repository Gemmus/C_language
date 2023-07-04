/*
Write a C program to convert uppercase string to lowercase using for loop. 
How to convert uppercase string to lowercase without using inbuilt library function strlwr(). 
How to convert string to lowercase using strlwr() string function.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE];

	printf("Enter your text:\n");
	gets(input);

	printf("Lowercase string : %s", strlwr(input));

	return 0;
}
