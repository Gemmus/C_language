/*
Write a C program to remove all empty lines from a file.
How to remove all empty lines from a given file in C programming.
Logic to remove empty lines from file in C program.
*/

#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1000

int  isEmpty(const char *str);
void removeEmptyLines(FILE *srcFile, FILE *tempFile);
void printFile(FILE *fptr);

int main()
{
    FILE *srcFile;
    FILE *tempFile;

    char path[100];

    printf("Enter file path:\n");
    scanf("%s", path);

    srcFile  = fopen(path, "r");
    tempFile = fopen("temp.tmp", "w");

    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.");
        exit(EXIT_FAILURE);
    }

    printf("File contents before removing all empty lines:\n");
    printFile(srcFile);

    rewind(srcFile); // Move srcFile pointer to beginning
    removeEmptyLines(srcFile, tempFile);

    fclose(srcFile);
    fclose(tempFile);
    remove(path);
    rename("temp.tmp", path);

    printf("\n\nFile contents after removing all empty line:\n");
    srcFile = fopen(path, "r");
    printFile(srcFile);
    fclose(srcFile);

    return 0;
}

void printFile(FILE *fptr)
{
    char ch;
    while((ch = fgetc(fptr)) != EOF) putchar(ch);
}

int isEmpty(const char *str)
{
    char ch;
    do
    {
        ch = *(str++);
        if(ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0') return 0;
    } while (ch != '\0');

    return 1;
}

void removeEmptyLines(FILE *srcFile, FILE *tempFile)
{
    char buffer[BUFFER_SIZE];

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        if(!isEmpty(buffer)) fputs(buffer, tempFile);
    }
}
