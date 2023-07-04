/*
Write a C program to convert uppercase string to lowercase using for loop.
How to convert uppercase string to lowercase without using inbuilt library function strlwr().
How to convert string to lowercase using strlwr() string function.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE];

    printf("Enter your text:\n");
    gets(input);

    for(int i = 0; input[i]!='\0'; i++)
    {
        if(input[i]>= 'A' && input[i] <= 'z')
        {
            input[i] = input[i] + 32;
        }
    }

    printf("Lowercase string: %s", input);

    return 0;
}
