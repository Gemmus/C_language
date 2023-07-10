/*
Write a C program to read contents of two files and compare them character by character.
How to compare two files character by character and line by line in C programming.
Logic to compare two files line by line and print difference line and column number in C program.
*/

#include <stdio.h>
#include <stdlib.h>

int compareFile(FILE * fPtr1, FILE * fPtr2, int * line, int * col);

int main()
{

    FILE * fPtr1;
    FILE * fPtr2;
    char path1[100];
    char path2[100];

    int diff, line, col;

    printf("Enter path of first file:\n");
    scanf("%s", path1);
    printf("Enter path of second file:\n");
    scanf("%s", path2);

    fPtr1 = fopen(path1, "r");
    fPtr2 = fopen(path2, "r");

    if (fPtr1 == NULL || fPtr2 == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    diff = compareFile(fPtr1, fPtr2, &line, &col);

    if (diff == 0) printf("Both files are equal.\n");
    else printf("Files are not equal. First difference: Line: %d, column: %d.\n", line, col);

    fclose(fPtr1);
    fclose(fPtr2);

    return 0;
}

int compareFile(FILE * fPtr1, FILE * fPtr2, int * line, int * col)
{
    char ch1, ch2;

    *line = 1;
    *col  = 0;

    do
    {
        ch1 = fgetc(fPtr1);
        ch2 = fgetc(fPtr2);

        if (ch1 == '\n')
        {
            *line += 1;
            *col = 0;
        }

        if (ch1 != ch2) return -1;

        *col  += 1;

    } while (ch1 != EOF && ch2 != EOF);

    if (ch1 == EOF && ch2 == EOF) return 0;
    else return -1;
}
