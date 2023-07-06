/*
Write a C program to read any string from user and remove last occurrence of a given character from the string.
How to remove the last occurrence of a character from string in C programming.
Logic to remove last occurrence of a character from the string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeLast(char *, const char);

int main()
{
    char input[MAX_SIZE], letter;

    printf("Enter the text:\n");
    gets(input);
    printf("Enter character to remove from string:\n");
    letter = getchar();

    removeLast(input, letter);

    printf("String after removing last '%c': %s", letter, input);

    return 0;
}

void removeLast(char * input, const char letter)
{
    int i = 0, index;
    int len = strlen(input);

    while(i < len)
    {
    	if(input[i] == letter) index = i;
    	i++;
    }

    while(index < len)
    {
    	input[index] = input[index + 1];
    	index++;
    }
}
