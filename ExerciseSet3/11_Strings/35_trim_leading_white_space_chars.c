/*
Write a C program to trim leading white space characters from a given string using loop.
How to remove leading white space characters from a given string using loop in C programming.
Logic to remove leading/starting blank spaces from a given string in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

void trimLeading(char * input);

int main()
{
    char input[MAX_SIZE];

    printf("Enter the text:\n");
    gets(input);

    printf("String before trimming leading whitespace: \n%s", input);
	
    trimLeading(input);

    printf("String after trimming leading whitespace: \n%s", input);

    return 0;
}

void trimLeading(char * str)
{
    int index = 0, i;

    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n') index++;

    if(index != 0)
	{
    	i = 0;
    	while(str[i + index] != '\0')
    	{
    		str[i] = str[i + index];
    		i++;
    	}
    	str[i] = '\0';
	}
}

