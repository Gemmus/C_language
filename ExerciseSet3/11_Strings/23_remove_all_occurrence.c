/*
Write a C program to remove all occurrences of a given character from the string using loop.
Write a function to remove all occurrences of a character from a string.
How to remove all occurrences of a character from the string in C programming.
Logic to remove all occurrences of a character from a given string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeAll(char *, const char);

int main()
{
    char input[MAX_SIZE], letter;

    printf("Enter the text:\n");
    gets(input);
    printf("Enter character to remove from string:\n");
    letter = getchar();

    removeAll(input, letter);

    printf("String after removing '%c': %s", letter, input);

    return 0;
}

void removeAll(char * input, const char letter)
{
    int i = 0, index;
    int len = strlen(input);

    while(i < len)
    {
    	if(input[i] == letter)
    	{
    		index = i;
    	    while(index < len)
    	    {
    	    	input[index] = input[index + 1];
    	    	index++;
    	    }
    	}
    	i++;
    }
}
