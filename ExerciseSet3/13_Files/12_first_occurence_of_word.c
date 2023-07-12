/*
Write a C program to find occurrence of a word in file.
How to find first or last occurrence of a word in file in C programming.
Logic to find occurrence of a word in file in C program.
How to search first and last occurrence of a word in file in C programming.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1000

int firstIndexOf(FILE *fptr, const char *word, int *line, int *col);

int main()
{
    FILE *fptr;
    char path[100];
    char word[50];
    int line, col;

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

    firstIndexOf(fptr, word, &line, &col);

    if (line != -1) printf("'%s' found at line: %d, column: %d.\n", word, line + 1, col + 1);
    else printf("'%s' does not exists.", word);

    fclose(fptr);

    return 0;
}

int firstIndexOf(FILE *fptr, const char *word, int *line, int *col)
{
    char str[BUFFER_SIZE];
    char *pos;

    *line = -1;
    *col  = -1;

    while((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        *line += 1;

        pos = strstr(str, word);

        if (pos != NULL)
        {
            *col = (pos - str);
            break;
        }
    }

    if (*col == -1) *line = -1;

    return *col;
}
