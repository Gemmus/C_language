/*
Write a C program to input any string from user and reverse the order of words. 
How to reverse the order of words in a given string using C programming. 
Logic to reverse the order of words in a sentence using C program.
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

