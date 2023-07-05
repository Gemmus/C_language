/*
Write a C program to check whether a string is palindrome or not without using loop.
How to check whether a string is palindromic string or not in C programming.
Logic to check palindrome string in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE];
	int len, startIndex, endIndex, palindrome = 1;

	printf("Enter the text:\n");
	gets(input);

	len = 0;
	while(input[len] != '\0') len++;

	startIndex = 0;
	endIndex = len - 1;


	while(startIndex <= endIndex)
	{
		if(input[startIndex] != input[endIndex]){
			palindrome = 0;
			break;
		}
		startIndex++;
		endIndex--;
	}

	if(palindrome == 1) printf("Input is a palindrome.");
	else printf("Input is not a palindrome.");

	return 0;
}

