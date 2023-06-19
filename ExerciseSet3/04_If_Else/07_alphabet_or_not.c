/*
Write a C program to input a character from user and check whether the given character is alphabet or not using if else.
How to check whether a character is alphabet or not in C programming.
Logic to check if a character is alphabet or not in C program.
*/

#include <stdio.h>

int main(void){

	char letter;

	printf("Enter a character:  ");
	scanf("%c", &letter);

	if((letter >= 'a' && letter <= 'z') || (letter >='A' && letter <= 'Z')) printf("'%c' is a character of the alphabet.", letter);
	else printf("'%c' is not a character of the alphabet.", letter);
	return 0;
}
