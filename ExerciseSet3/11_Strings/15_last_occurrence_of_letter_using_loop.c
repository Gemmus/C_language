/*
Write a C program to input any string from user and find the last occurrence of a given character in the string.
How to find the last occurrence of a given character in the string.
Logic to find last occurrence of a given character in a string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int indexOfLast(const char * input, const char letter);

int main()
{
	char input[MAX_SIZE], letter;
	int index;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter character to be searched:\n");
	letter = getchar();

	index = indexOfLast(input, letter);

	if(index == -1) printf("'%c' not found.", letter);
	else printf("Last index of letter '%c' is found at: %d.", letter, index);

	return 0;
}

int indexOfLast(const char * input, const char letter){
	int index = -1, i = 0;

	while(input[i] != '\0')
	{
		if(input[i] == letter) index = i;
	    i++;
	}

	return index;
}
