/*
Write a C program to compare two strings using loop character by character.
How to compare two strings without using inbuilt library function strcmp() in C programming.
Comparing two strings lexicographically without using string library functions.
How to compare two strings using strcmp() library function.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
	char input1[MAX_SIZE], input2[MAX_SIZE];
	int result;

	printf("Enter first string:\n");
	gets(input1);
	printf("Enter second string:\n");
	gets(input2);

	result = strcmp(input1, input2);

	if(result == 0) printf("Both strings are equal.");
	else if(result < 0) printf("First string is lexicographically smaller than second.");
	else printf("First string is lexicographically greater than second.");
	return 0;
	}
