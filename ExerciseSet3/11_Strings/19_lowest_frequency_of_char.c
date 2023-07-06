/*
Write a C program to find minimum occurring character in a string using loop.
How to find lowest frequency character in a string using loop in C programming.
Program to find minimum frequency character in a given string in C.
Logic to find least occurring character in a given string.
*/

#include <stdio.h>
#define MAX_SIZE 100
#define MAX_CHARS 255

int main()
{
    char input[MAX_SIZE], freq[MAX_CHARS];
    int i, min = 0, ascii;

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
    	 if(freq[i] != 0)
    	 {
    		 if(freq[min] == 0 || freq[i] < freq[min]) min = i;
    	 }
    }

    printf("Minimum occurring character of '%c': %d time(s).", min, freq[min]);

    return 0;
}
