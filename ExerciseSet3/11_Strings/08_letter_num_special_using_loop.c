/*
Write a C program to count total number of alphabets, digits or special characters in a string using loop.
How to find total number of alphabets, digits and special characters in a string in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE];
    int letter = 0, number = 0, special = 0;

    printf("Enter your text:\n");
    gets(input);

    for(int i = 0; input[i]!='\0'; i++)
    {
        if((input[i]>= 'A' && input[i] <= 'Z') || (input[i]>= 'a' && input[i] <= 'z')) letter++;
        else if(input[i]>= '0' && input[i] <= '9') number++;
        else special++;
    }

    printf("The digit(s) in the string: %d.\n", letter);
    printf("The number(s) in the string: %d.\n", number);
    printf("The special character(s) in the string: %d.\n", special);

    return 0;
}

