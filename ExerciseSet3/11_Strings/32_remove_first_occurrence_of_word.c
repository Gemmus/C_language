/*
Write a C program to input any string from user and remove first occurrence of a given word from string.
Write a function to remove first occurrence of a word from the string.
How to remove first occurrence of a word from the string in C programming.
Logic to remove first occurrence of a word from given string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeFirst(char * input, const char * word);

int main()
{
    char input[MAX_SIZE], word[MAX_SIZE];

	printf("Enter the text:\n");
	gets(input);
	printf("Enter the word:\n");
	gets(word);

	removeFirst(input, word);

	printf("String after removing '%s': \n%s", word, input);

    return 0;
}

void removeFirst(char * input, const char * word)
{
    int i, j, inputLen, wordLen, found = 0;

    inputLen = strlen(input);
    wordLen = strlen(word);

    for(i = 0; i < inputLen; i++)
    {
        found = 1;
        for(j = 0; j < wordLen; j++)
        {
            if(input[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            for(j=i; j<= inputLen - wordLen; j++)
            {
                input[j] = input[j + wordLen];
            }

            break;
        }
    }
}
