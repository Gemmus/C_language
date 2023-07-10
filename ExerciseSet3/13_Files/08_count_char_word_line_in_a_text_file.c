/*
Write a C program to count number of characters, words and lines in a text file.
Logic to count characters, words and lines in a file in C program.
How to count total characters, words and lines in a text file in C programming.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr;
    char path[100], ch;
    int line = 0, word = 0, character = 0;

    printf("Enter the path of first file:\n");
    scanf("%s", path);

    fPtr = fopen(path, "r");

    if (fPtr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fPtr)) != EOF)
    {
    	character++;
    	if (ch == '\n' || ch == '\0') line++;
    	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') word++;
    }

	if (character > 0)
	{
		word++;
    	line++;
	}

    printf("Total characters: %d.\n", character);
    printf("Total words: %d.\n", word);
    printf("Total lines: %d.\n", line);

    fclose(fPtr);

    return 0;
}
