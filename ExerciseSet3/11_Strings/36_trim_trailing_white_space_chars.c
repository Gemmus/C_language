/*
Write a C program to trim trailing/end white space characters in a string using loop.
How to remove trailing blank space characters from a given string using loop in C programming.
Logic to delete all trailing white space characters from a given string in C.

Example:
Enter the text:
I love cats.          
String before trimming trailing white space: 
'I love cats.          '
String after trimming trailing white spaces: 
'I love cats.'
*/

#include <stdio.h>
#define MAX_SIZE 100

void trimTrailing(char * input);

int main()
{
    char input[MAX_SIZE];

    printf("Enter the text:\n");
    gets(input);

    printf("String before trimming trailing white space: \n'%s'\n", input);

    trimTrailing(input);

    printf("String after trimming trailing white spaces: \n'%s'", input);

    return 0;
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
