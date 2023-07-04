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
    int consonant = 0, vowel = 0;

    printf("Enter your text:\n");
    gets(input);

    for(int i = 0; input[i]!='\0'; i++)
    {
        if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
        {
        	if(input[i] == 'A' || input[i] == 'a' || input[i] == 'E' || input[i] == 'e' || input[i] == 'I' || input[i] == 'i' || input[i] == 'O' || input[i] == 'o' || input[i] == 'U' || input[i] == 'u') vowel++;
        	else consonant++;
        }

    }

    printf("The number of vowels in the string: %d.\n", vowel);
    printf("The number of consonants in the string: %d.\n", consonant);

    return 0;
}
