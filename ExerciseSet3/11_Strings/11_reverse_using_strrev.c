/*
Write a C program to find reverse of a given string using loop.
How to find reverse of any given string using loop in C programming.
Logic to find reverse of a string without using strrev() function in C.
C program to reverse a string using strrev() string function.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE];

	printf("Enter your text:\n");
	gets(input);

	printf("The reverse of the string: %s", strrev(input));

	return 0;
}
