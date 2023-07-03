/*
Write a C program to create a file and write contents in it.
How to create a file in C programming? C program to input a string from user and store it in a text file.
Learn how to create a file and write contents to it in C programming.
*/

#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100

int main()
{
    char data[DATA_SIZE];

    FILE * fPtr;
    fPtr = fopen("file1.txt", "w");

    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);

    fputs(data, fPtr);

    fclose(fPtr);

    printf("File created and saved successfully. :) \n");

    return 0;
}
