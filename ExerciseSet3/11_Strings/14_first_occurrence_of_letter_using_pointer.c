/*
Write a C program to input any string from user and find the first occurrence of a given character in the string.
How to find the first occurrence of a given character in a string in C programming.
Logic to find first occurrence of a character in a string in C programming.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int indexOf(const char * input, const char letter);

int main()
{
	char input[MAX_SIZE], letter;
	int index;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter character to be searched:\n");
	letter = getchar();

	index = indexOf(input, letter);

	if(index == -1) printf("'%c' not found.", letter);
	else printf("'%c' is found at index %d.", letter, index);

	return 0;
}

int indexOf(const char * input, const char letter){
	int i = 0;

	while(*input)
	{
		if(*input == letter) return i;
	    i++;
	    input++;
	}

	return -1;
}
