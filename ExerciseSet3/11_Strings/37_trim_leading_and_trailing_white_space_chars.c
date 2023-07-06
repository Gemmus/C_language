/*
Write a C program to trim both leading and trailing white space characters in a string using loop.
How to remove both leading and trailing white space characters in a string using loop in C programming.
Logic to delete all leading and trailing white space characters from a given string in C.

Example:
Enter the text:
		I love cats. 		
String before trimming leading and trailing whitespace: 
'		I love cats. 		'
String after trimming leading and trailing whitespace: 
'I love cats.'
*/

#include <stdio.h>
#define MAX_SIZE 100

void trimLeading(char * input);
void trimTrailing(char * input);

int main()
{
    char input[MAX_SIZE];

    printf("Enter the text:\n");
    gets(input);

    printf("String before trimming leading and trailing whitespace: \n'%s'\n", input);

    trimLeading(input);
    trimTrailing(input);

    printf("String after trimming leading and trailing whitespace: \n'%s'", input);

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

void trimTrailing(char * input)
{
    int index = -1, i = 0;

    while(input[i] != '\0')
    {
        if(input[i] != ' ' && input[i] != '\t' && input[i] != '\n') index = i;
        i++;
    }

    input[index + 1] = '\0';
}
