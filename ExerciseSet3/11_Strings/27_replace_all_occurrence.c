/*
Write a C program to replace all occurrence of a character with another in a string using function.
How to replace all occurrences of a character with another in a string using functions in C programming.
Logic to replace all occurrences of a character in given string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void replaceAll(char *, const char, const char);

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

    replaceAll(input, letter1, letter2);

    printf("String after replacing all '%c' with '%c': %s", letter1, letter2, input);

    return 0;
}

void replaceAll(char * input, const char letter1, const char letter2)
{
    int i = 0;
    int len = strlen(input);

    while(i < len)
    {
    	if(input[i] == letter1)
    	{
    		input[i] = letter2;
    	}
    	i++;
    }
}
