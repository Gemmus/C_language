/*
Write a C program to count all occurrences of a character in a string using loop.
How to find total occurrences of a given character in a string using for loop in C programming.
Logic to count total occurrences of a character in a given string in C program.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE], letter;
	int i = 0, count = 0;

	printf("Enter the text:\n");
	gets(input);
	printf("Enter character to be searched:\n");
	letter = getchar();

	while(input[i] != '\0'){
		if(input[i] == letter) count++;
		i++;
	}

	printf("Letter '%c' occurred %d time(s).", letter, count);

	return 0;
}
