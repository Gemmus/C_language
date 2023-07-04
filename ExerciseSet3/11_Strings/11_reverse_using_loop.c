/*
Write a C program to find reverse of a given string using loop.
How to find reverse of any given string using loop in C programming.
Logic to find reverse of a string without using strrev() function in C.
C program to reverse a string using strrev() string function.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char input[MAX_SIZE], reverse[MAX_SIZE];
	int i = 0, strIndex, revIndex, len;

	printf("Enter your text:\n");
	gets(input);

	while(input[i] != '\0') i++;

	len = i;

	revIndex = 0;
	strIndex = len - 1;
	while(strIndex >= 0)
	{
	reverse[revIndex] = input[strIndex];
	strIndex--;
	revIndex++;
	}

	reverse[revIndex] = '\0';

	printf("Reverse string: %s.", reverse);

	return 0;
}
