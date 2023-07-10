/*
Write a C program to copy contents from one file to another.
Logic to copy contents from one file to another file in C program.
How to copy contents from one file to another using functions in C programming.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr1;
    FILE * fPtr2;
    char path1[100], path2[100], ch;

    printf("Enter the path of first file:\n");
    scanf("%s", path1);
    printf("Enter the name of second file:\n");
    scanf("%s", path2);

    fPtr1 = fopen(path1, "r");
    fPtr2 = fopen(path2, "w");

    if (fPtr1 == NULL || fPtr2 == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    ch = fgetc(fPtr1);
    while (ch != EOF)
    {
        fputc(ch, fPtr2);
        ch = fgetc(fPtr1);
    }

    printf("Files copied successfully.\n");

    return 0;
}
