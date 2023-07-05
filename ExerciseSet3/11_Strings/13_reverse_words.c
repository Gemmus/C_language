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
	int len, i, index, wordStart, wordEnd;

	printf("Enter the text:\n");
	gets(input);

	len = strlen(input);
	index = 0;

	wordStart = len - 1;
	wordEnd   = len - 1;

	while(wordStart > 0)
	{
		if(input[wordStart] == ' ')
	    {
			i = wordStart + 1;
	        while(i <= wordEnd)
	        {
	        	reverse[index] = input[i];
	            i++;
	            index++;
	        }
	        reverse[index++] = ' ';
	        wordEnd = wordStart - 1;
	    }
		wordStart--;
	}

	for(i = 0; i <= wordEnd; i++)
	{
		reverse[index] = input[i];
		index++;
	}

	reverse[index] = '\0';

	printf("Original string: %s\n", input);
	printf("Reverse ordered words: %s", reverse);

	return 0;
}

