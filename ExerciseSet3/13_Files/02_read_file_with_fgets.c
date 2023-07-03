/*
Write a C program to read a file and display its contents on console.
How to read a file and display file contents on console in C programming.
In this exercises, I will explain you how to read a file character by character using fgetc().
How to read a file line by line using fgets().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1000

int main()
{
    FILE * fPtr;
    char buffer[BUFFER_SIZE];
    int totalRead = 0;

    fPtr = fopen("file1.txt", "r");

    if(fPtr == NULL)
    {
    	printf("Unable to open file.\n");
    	exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading file contents line by line. \n\n");

    while(fgets(buffer, BUFFER_SIZE, fPtr) != NULL)
    {
    	totalRead = strlen(buffer);
        buffer[totalRead - 1] = buffer[totalRead - 1] == '\n' ? '\0' : buffer[totalRead - 1];
        printf("%s\n", buffer);
    }

    fclose(fPtr);
}
