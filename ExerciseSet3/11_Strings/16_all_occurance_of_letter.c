/*
Write a C program to search all occurrences of a character in a string using loop.
How to find all occurrences of a character in a given string using for loop in C programming.
Program to print all index of a character in a given string.
Logic to search all occurrences of a character in given string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE], letter;
	int i = 0;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter character to be searched:\n");
	letter = getchar();

	while(input[i] != '\0'){
		if(input[i] == letter) printf("%c is found at %d index.\n", letter, i);
		i++;
	}

	return 0;
}
