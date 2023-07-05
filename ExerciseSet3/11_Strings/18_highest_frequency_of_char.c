/*
Write a C program to find maximum occurring character in a string using loop.
How to find highest frequency character in a string using loop in C programming.
Program to find the highest occurring character in a string in C.
Logic to find maximum occurring character in a string in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100
#define MAX_CHARS 255

int main()
{
    char input[MAX_SIZE], freq[MAX_CHARS];
    int i, max = 0, ascii;

    printf("Enter the text:\n");
    gets(input);

    for(i = 0; i < MAX_CHARS; i++) freq[i] = 0;

    i = 0;
    while(input[i] != '\0')
    {
        ascii = (int)input[i];
        freq[ascii] += 1;
        i++;
    }

    for(i = 0; i < MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }

    printf("Maximum occurring character of '%c': %d time(s).", max, freq[max]);

    return 0;
}
