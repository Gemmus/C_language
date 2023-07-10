/*
Write a C program to check whether a character is uppercase or lowercase using macro.
Logic to check uppercase or lowercase character using macro in C.
How to check whether a character is uppercase or lowercase using macro in C program.
*/

#include <stdio.h>
#define UPPER(x) (x >= 'A' && x <= 'Z') // Return true (1) or false (0).
#define LOWER(x) (x >= 'a' && x <= 'z') // Return true (1) or false (0).

int main()
{
    char letter;

    printf("Enter a letter:\n");
    scanf("%c", &letter);

    if(UPPER(letter)) printf("'%c' is an uppercase letter.", letter);
    if(LOWER(letter)) printf("'%c' is an lowercase letter.", letter);

    return 0;
}
