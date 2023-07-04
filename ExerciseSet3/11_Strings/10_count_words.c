/*
Write a C program to count total number of words in a string using loop.
How to find total number of words in a given string using loops in C programming.
Logic to count total number of words in a string.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE], prevChar = '\0';
    int word = 0, i = 0;

    printf("Enter the text:\n");
    gets(input);

    while(1)
    {
        if(input[i] == ' ' || input[i] == '\n' || input[i] == '\t' || input[i]=='\0')
        {
            if(prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0')
            {
                word++;
            }
        }

        prevChar = input[i];

        if(input[i] == '\0') break;
        else i++;
    }

    printf("Total number of words: %d.", word);

    return 0;
}
