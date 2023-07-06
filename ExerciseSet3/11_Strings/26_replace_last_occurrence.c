/*
Write a C program to replace last occurrence of a character with another in a given string.
How to replace last occurrence of a character with another character in a given string using functions in C programming.
Logic to replace last occurrence of a character with another in given string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void replaceFirst(char *, const char, const char);

int main()
{
    char input[MAX_SIZE], letter1, letter2;

    printf("Enter the text:\n");
    gets(input);
    printf("Enter character to remove from string:\n");
    letter1 = getchar();
    getchar();
    printf("Enter character to add to string:\n");
    letter2 = getchar();

    replaceFirst(input, letter1, letter2);

    printf("String after removing last '%c' and replacing with '%c': %s", letter1, letter2, input);

    return 0;
}

void replaceFirst(char * input, const char letter1, const char letter2)
{
    int i = 0, index;
    int len = strlen(input);

    while(i < len && input[i] == letter1)
    {
    	index = i;
    	i++;
    }

    input[index] = letter2;
}
