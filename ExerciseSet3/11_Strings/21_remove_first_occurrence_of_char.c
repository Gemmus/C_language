/*
Write a C program to read any string from user and remove first occurrence of a given character from the string.
The program should also use the concept of functions to remove the given character from string.
How to remove first occurrences of a given character from the string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeFirst(char *, const char);

int main()
{
    char input[MAX_SIZE], letter;

    printf("Enter the text:\n");
    gets(input);
    printf("Enter character to remove from string:\n");
    letter = getchar();

    removeFirst(input, letter);

    printf("String after removing first '%c': %s", letter, input);

    return 0;
}

void removeFirst(char * input, const char letter)
{
    int i = 0;
    int len = strlen(input);

    while(i < len && input[i] != letter) i++;

    while(i < len)
    {
        input[i] = input[i + 1];
        i++;
    }
}
