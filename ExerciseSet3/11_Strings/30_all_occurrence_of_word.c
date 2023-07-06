/*
Write a C program to search all occurrences of a word in given string using loop.
How to find index of all occurrences of a word in given string using loop in C programming.
Logic to search all occurrences of a word in given string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE], word[MAX_SIZE];
    int found, strLen, wordLen;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter word to be searched:\n");
	gets(word);

	strLen  = strlen(input);
	wordLen = strlen(word);

	for(int i = 0; i <= strLen - wordLen; i++)
	{
		found = 1;
		for(int j = 0; j < wordLen; j++)
		{
			if(input[i + j] != word[j])
			{
				found = 0;
				break;
			}
		}

		if(found == 1) printf("'%s' found at index: %d.\n", word, i);
	}

    return 0;
}
