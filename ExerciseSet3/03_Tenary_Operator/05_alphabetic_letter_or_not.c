/*
Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:. 
How to check alphabets using conditional operator in C programming.
 */

#include <stdio.h>

int main(){
	char letter;

	printf("Enter a character:  ");
	scanf("%c", &letter);

    (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z') ? printf("It is an alphabetic letter.") : printf("It is not an alphabetic letter.");

	return 0;
}

