/*
Write a C program to count occurrences of a word in file.
How to count occurrences of a word in file in C programming.
Logic to count all occurrence of a word in file in C program.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1000

int wordCounter(FILE *fptr, const char *word);

int main()
{
    FILE *fptr;
    char path[100];
    char word[50];
    int count = 0;

    printf("Enter file path:\n");
    scanf("%s", path);

    printf("Enter word to search:\n");
    scanf("%s", word);

    fptr = fopen(path, "r");

    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    count = wordCounter(fptr, word);

    if (count != 0) printf("'%s' found %d times.", word, count);
    else printf("'%s' does not exists.", word);

    fclose(fptr);

    return 0;
}

int wordCounter(FILE *fptr, const char *word)
{
	char str[BUFFER_SIZE];
	char *pos;
	int index, count = 0;

	while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
	{
		index = 0;

		while ((pos = strstr(str + index, word)) != NULL)
		{
			index = (pos - str) + 1;
			count++;
		}
	}
	return count;
}
