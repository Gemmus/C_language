/*
Write a C program to remove a given line from a file. 
How to remove a given line from a text file in C programming. 
Logic to remove specific line from a file in C program.
*/

#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1000

void deleteLine(FILE *srcFile, FILE *tempFile, const int line);
void printFile(FILE *fptr);

int main()
{
    FILE *srcFile;
    FILE *tempFile;
    char path[100];
    int line;

    printf("Enter file path:\n");
    scanf("%s", path);

    printf("Enter line number to remove:\n");
    scanf("%d", &line);

    srcFile  = fopen(path, "r");
    tempFile = fopen("delete-line.tmp", "w");

    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }
    
    printf("\nFile contents before removing line:\n");
    printFile(srcFile);

    rewind(srcFile);
    deleteLine(srcFile, tempFile, line);

    fclose(srcFile);
    fclose(tempFile);

    remove(path);
    rename("delete-line.tmp", path);

    printf("\nFile contents after removing %d line:\n", line);

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

void deleteLine(FILE *srcFile, FILE *tempFile, const int line)
{
    char buffer[BUFFER_SIZE];
    int count = 1;

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        if (line != count) fputs(buffer, tempFile);
        count++;
    }
}
