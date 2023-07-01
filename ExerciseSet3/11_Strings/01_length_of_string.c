/*
Write a C program to find length of a string using loop.
How to find length of a string without using in-built library function strlen() in C programming.
Effective way to find length of a string without using strlen() function.
How to find length of a string using strlen() string function.
(The non-selected methods needs to be commented out respectively to run it.)
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
    char input[MAX_LENGTH];

    printf("Enter a string:\n");
    gets(input);

    // Using a for loop:
    int count = 0;
    for(int i = 0; input[i]!='\0'; i++) count++;
    printf("%s contains %d characters.", input, count);

    // Using a while loop:
    int count = 0;
    while(input[++count] != '\0');    // or: while(input[count] != '\0') count++;
    printf("%s contains %d characters.", input, count);

    // Using strlen() function:
    int length = strlen(input);
    printf("%s contains %d characters.", input, length);

    // Using pointers:
    char * str = input; /* Declare pointer that points to the input */
    int count = 0;
    while(*(str++)) count++; // or: while(*(str++) != '\0') count++;
    printf("%s contains %d characters.", input, count);

    return 0;
}
