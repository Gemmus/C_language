/*
Write a C program to remove all repeated characters in a string using loops.
How to remove all duplicate characters from a string using for loop in C programming.
Program to find and remove all duplicate characters in a string.
Logic to remove all repeated character from string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100


void removeDuplicates(char * input);
void removeAll(char * input, const char letter, int index);

int main()
{
    char input[MAX_SIZE];

    printf("Enter the text:\n");
    gets(input);


    removeDuplicate(input);

    printf("String after removing duplicates: %s", input);

    return 0;
}

void removeDuplicate(char * input)
{
    int i = 0;

    while(input[i] != '\0')
    {
        removeAll(input, input[i], i + 1);
        i++;
    }
}

void removeAll(char * input, const char letter, int index)
{
    int i;

    while(input[index] != '\0')
    {
        if(input[index] == letter)
        {
            i = index;
            while(input[i] != '\0')
            {
                input[i] = input[i + 1];
                i++;
            }
        }
        else index++;
    }
}

