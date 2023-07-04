/*
Write a C program to read data from user and append data into a file.
How to append data at end of a file in C programming.
Logic how to append data into a file in C using append file mode.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1000

void readFile(FILE * fPtr);

int main()
{
    FILE *fPtr;
    char filePath[100], dataToAppend[BUFFER_SIZE];

    printf("Enter file path:\n");
    scanf("%s", filePath);

    fPtr = fopen(filePath, "a");

    if (fPtr == NULL)
    {
        printf("Unable to open '%s' file.\n", filePath);
        exit(EXIT_FAILURE);
    }

    getchar();

    printf("Enter data to append:\n");
    fgets(dataToAppend, BUFFER_SIZE, stdin);
    dataToAppend[strlen(dataToAppend)-1] = '\0';

    fputs(dataToAppend, fPtr);

    fPtr = freopen(filePath, "r", fPtr);

    printf("\nSuccessfully appended data to file.\n");
    printf("Changed file contents:\n\n");
    readFile(fPtr);

    fclose(fPtr);

    return 0;
}

void readFile(FILE * fPtr)
{
    char ch;

    do
    {
        ch = fgetc(fPtr);
        if(ch != EOF) putchar(ch);
    } while (ch != EOF);
}
