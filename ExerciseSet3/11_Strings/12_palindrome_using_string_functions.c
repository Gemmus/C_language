/*
Write a C program to check whether a string is palindrome or not without using loop.
How to check whether a string is palindromic string or not in C programming.
Logic to check palindrome string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE], reverse[MAX_SIZE];
	int result;

	printf("Enter the text:\n");
	gets(input);

	strcpy(reverse, input);
	strrev(reverse);

	result = strcmp(input, reverse);

	if(result == 0) printf("Input is a palindrome.");
	else printf("Input is not palindrome.");

	return 0;
}

