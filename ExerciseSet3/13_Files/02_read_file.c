/*
Write a C program to read a file and display its contents on console.
How to read a file and display file contents on console in C programming.
In this exercises, I will explain you how to read a file character by character using fgetc().
How to read a file line by line using fgets().
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr;

    char ch;

    fPtr = fopen("file1.txt", "r");

    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading file contents character by character. \n\n");

    while(ch != EOF) // Repeat this if last read character is not EOF
    {
        ch = fgetc(fPtr);
        if(ch != EOF) putchar(ch);
    }

    fclose(fPtr);

    return 0;
}
