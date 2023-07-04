/*
Write a C program to count total number of alphabets, digits or special characters in a string using loop.
How to find total number of alphabets, digits and special characters in a string in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE];
    char * ptr = input;
    int letter = 0, number = 0, special = 0;

    printf("Enter your text:\n");
    gets(input);

    while(*ptr)
    {
    	if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) letter++;
    	else if(*ptr >= '0' && *ptr <= '9') number++;
    	else special++;
        ptr++;
    }

    printf("The digit(s) in the string: %d.\n", letter);
    printf("The number(s) in the string: %d.\n", number);
    printf("The special character(s) in the string: %d.\n", special);

    return 0;
}

