/*
Write a C program to remove extra spaces, blanks from a string.
How to remove extra blank spaces, blanks from a given string using functions in C programming.
Logic to remove extra white space characters from a string in C.

Example:
Enter the text:
I     love    cats     .
String before removing blanks:
'I     love    cats     .'
String after removing blanks:
'I love cats .'
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

char * removeBlanks(const char * input);

int main()
{
    char input[MAX_SIZE];
    char * output;

    printf("Enter the text:\n");
    gets(input);

    printf("String before removing blanks:\n'%s'\n", input);

    output = removeBlanks(input);

    printf("String after removing blanks:\n'%s'", output);

    return 0;
}

char * removeBlanks(const char * input)
{
    int i = 0, j = 0;
    char * output;

    output = (char *)malloc(MAX_SIZE);

    while(input[i] != '\0')
    {
        if(input[i] == ' ')
        {
            output[j] = ' ';
            j++;

            while(input[i] == ' ') i++;
        }

        output[j] = input[i];
        i++;
        j++;
    }

    output[j] = '\0';

    return output;
}
