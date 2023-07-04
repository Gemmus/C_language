/*
Write a C program to compare two strings using loop character by character.
How to compare two strings without using inbuilt library function strcmp() in C programming.
Comparing two strings lexicographically without using string library functions.
How to compare two strings using strcmp() library function.
*/

#include <stdio.h>
#define MAX_SIZE 100

int compare(char * str1, char * str2);

int main()
{
	char input1[MAX_SIZE], input2[MAX_SIZE];
	int result;

	printf("Enter first string:\n");
	gets(input1);
	printf("Enter second string:\n");
	gets(input2);

	result = compare(input1, input2);

	if(result == 0) printf("Both strings are equal.");
	else if(result < 0) printf("First string is lexicographically smaller than second.");
	else printf("First string is lexicographically greater than second.");
	return 0;
	}

int compare(char * str1, char * str2)
{
	int i = 0;

	while(str1[i] == str2[i])
	{
		if(str1[i] == '\0' && str2[i] == '\0') break;
		i++;
	}

	return str1[i] - str2[i];
}
