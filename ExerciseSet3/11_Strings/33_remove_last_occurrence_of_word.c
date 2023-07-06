/*
Write a C program to remove from last occurrence of a word in given string using loop.
How to remove the last occurrence of any word in given string using loop in C programming.
Logic to remove last occurrence of a word from given string.
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
	else
	{
		for(int i = index; i <= strLen - wordLen; i++)
		{
			input[i] = input[i + wordLen];
		}
		printf("String after removing last '%s': \n%s", word, input);
	}

    return 0;
}
