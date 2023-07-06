/*
Write a C program to count occurrences of a word in a given string using loop.
How to count total occurrences of a given word in a string using loop in C programming.
Logic to count occurrences of a word in given string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE], word[MAX_SIZE];
    int found, strLen, wordLen, count = 0;

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

		if(found == 1) count++;
	}

	printf("'%s' found %d time(s).", word, count);

    return 0;
}
