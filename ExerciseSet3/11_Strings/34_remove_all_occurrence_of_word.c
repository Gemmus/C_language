/*
Write a C program to remove all occurrences of a given word in string using loop.
How to remove all occurrences of a word in given string using for loop in C programming.
Deleting all occurrences of a word in given string in C program.
Logic to remove all occurrences of a word in given string.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeAll(char * input, char * word);

int main()
{
    char input[MAX_SIZE];
    char word[MAX_SIZE];

    printf("Enter the text:\n");
    gets(input);
    printf("Enter the word:\n");
    gets(word);

    removeAll(input, word);

    printf("String after removing '%s' : \n%s", word, input);

    return 0;
}

void removeAll(char * input, char * word)
{
    int i, j, found, inputLen, wordLen;

    inputLen   = strlen(input);
    wordLen = strlen(word);

    for(i = 0; i <= inputLen - wordLen; i++)
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

        if(input[i + j] != ' ' && input[i + j] != '\t' && input[i + j] != '\n' && input[i + j] != '\0')
        {
            found = 0;
        }

        if(found == 1)
        {
            for(j = i; j <= inputLen - wordLen; j++)
            {
                input[j] = input[j + wordLen];
            }

            inputLen = inputLen - wordLen;
            i--;
        }
    }
}
