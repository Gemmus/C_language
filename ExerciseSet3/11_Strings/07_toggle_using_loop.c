/*
Write a C program to toggle case of each characters of a string using loop.
How to change case of each characters of a string in C programming.
Program to swap case of each characters in a string using loop in C.
Logic to reverse the case of each character in a given string in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

void toggleCase(char * str);

int main()
{
    char input[MAX_SIZE];
    char * ptr = input;
    int letter = 0, number = 0, special = 0;

    printf("Enter your text:\n");
    gets(input);

    toggleCase(input);

    printf("String after toggling case: %s", input);

    return 0;
}

void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
        i++;
    }
}
