/*
Write a C program to count occurrences of all words in a file.
Logic to count occurrences of all words in a file in C program.
How to count occurrences of all words in a file in C programming.
C program to count occurrences of unique words in a file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORDS 1000

int main()
{
    FILE *fptr;
    char path[100];
    int i, len, index, isUnique;

    char words[MAX_WORDS][50];
    char word[50];

    int count[MAX_WORDS];

    printf("Enter file path:\n");
    scanf("%s", path);

    fptr = fopen(path, "r");

    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < MAX_WORDS; i++) count[i] = 0;

    index = 0;

    while (fscanf(fptr, "%s", word) != EOF)
    {
        for(int i = 0; word[i]!='\0'; i++)
            {
                if(word[i]>= 'A' && word[i] <= 'Z')
                {
                    word[i] = word[i] + 32;
                }
            }

        len = strlen(word);
        if (ispunct(word[len - 1]))
            word[len - 1] = '\0';

        isUnique = 1;
        for (i = 0; i < index && isUnique; i++)
        {
            if (strcmp(words[i], word) == 0)
                isUnique = 0;
        }

        if (isUnique)
        {
            strcpy(words[index], word);
            count[index]++;

            index++;
        }
        else
        {
            count[i - 1]++;
        }
    }

    fclose(fptr);

    printf("\nOccurrences of all distinct words in file: \n");
    for (i = 0; i < index; i++)
    {
        printf("%-15s => %d\n", words[i], count[i]);
    }

    return 0;
}
