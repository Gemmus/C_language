/*
Write a C program to convert string from lowercase to uppercase string using loop.
How to convert string from lowercase to uppercase using for loop in C programming.
C program to convert lowercase to uppercase string using strupr() string function.
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
        if(input[i]>= 'a' && input[i] <= 'z')
        {
            input[i] = input[i] - 32;
        }
    }

    printf("Uppercase string : %s", input);

    return 0;
}
