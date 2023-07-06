/*
Write a C program to count frequency of each character in a string using loop.
How to find frequency of each characters in a string in C programming.
Logic to count frequency of each character in a given string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
#define MAX_CHARS 255

int main()
{
    char input[MAX_SIZE], freq[MAX_CHARS];
    int i, len;

    printf("Enter the text:\n");
    gets(input);

    len = strlen(input);

    for(i = 0; i < MAX_CHARS; i++) freq[i] = 0;

    for(i = 0; i < MAX_CHARS; i++)
    {
    	if(input[i]>='a' && input[i]<='z') freq[input[i] - 97]++;
    	else if(input[i]>='A' && input[i]<='Z') freq[input[i] - 65]++;
    }

    printf("Frequency of all characters:\n");
    for(i = 0; i < MAX_CHARS; i++)
	{
    	if(freq[i] != 0) printf("'%c': %d\n", (i + 97), freq[i]);
	}

    return 0;
}
