/*
Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else.
How to check uppercase and lowercase using if else in C programming.
Logic to check uppercase and lowercase alphabets in C program.
*/

#include <stdio.h>

int main(void){

	char ch;

	printf("Enter a character:  ");
	scanf("%c", &ch);

	if(ch >= 'a' && ch <= 'z') printf("'%c' is a lowercase letter.", ch);
	else if(ch >= 'A' && ch <= 'Z') printf("'%c' is an uppercase letter.", ch);
	else printf("'%c' is not a letter.", ch);

	return 0;
 }
