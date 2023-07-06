/*
Write a C program to find last occurrence of a word in given string using loop.
How to find last occurrence of a word in given string using loop in C programming.
Logic to search last index of a word in given string in C programming.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE], word[MAX_SIZE];
    int index, found, strLen, wordLen;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter word to be searched:\n");
	gets(word);

	index = -1;
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

		if(found == 1) index = i;
	}

	if(index == -1) printf("'%s' not found.", word);
	else printf("Last index of '%s' = %d", word, index);

    return 0;
}
