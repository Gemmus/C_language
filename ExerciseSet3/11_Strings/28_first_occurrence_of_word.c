/*
Write a C program to find the first occurrence of word in a string using loop.
How to find the first occurrence of any word in a given string in C programming.
Logic to search a word in a given string in C programming.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE], word[MAX_SIZE];
    int i, index = 0, found = 0;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter word to be searched:\n");
	gets(word);

	while(input[index] != '\0')
	{
		if(input[index] == word[0])
		{
			i = 0;
			found = 1;
			while(word[i] != '\0')
			{
				if(input[index + i] != word[i])
				{
					found = 0;
					break;
				}
				i++;
			}
		}

		if(found == 1) break;
        index++;
	}

	if(found == 1) printf("'%s' is found at index %d.", word, index);
	else printf("'%s' is not found.", word);

    return 0;
}
