/*
Write a C program to find total number of vowels and consonants in a string using loop and if else.
How to find total number of vowels and consonants in a string using switch case in C programming.
Logic to count number of vowels and consonants in a string.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE];
    char * ptr = input;
    int consonant = 0, vowel = 0;

    printf("Enter your text:\n");
    gets(input);

    while(*ptr)
    {
        if((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
        {
        	if(*ptr == 'A' || *ptr == 'a' || *ptr == 'E' || *ptr == 'e' || *ptr == 'I' || *ptr == 'i' || *ptr == 'O' || *ptr == 'o' || *ptr == 'U' || *ptr == 'u') vowel++;
        	else consonant++;
        }
        ptr++;
    }

    printf("The number of vowels in the string: %d.\n", vowel);
    printf("The number of consonants in the string: %d.\n", consonant);

    return 0;
}
