/*
Write a C program to check whether an alphabet is vowel or consonant using if else.
How to check vowels and consonants using if else in C programming.
C Program to input a character from user and check whether it is vowel or consonant.
Logic to check vowel or consonant in C programming.
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

	char letter;

	printf("Enter a character:  ");
	scanf("%c", &letter);
	letter = tolower(letter);

	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') printf("'%c' is a vowel.", letter);
	else if(letter >= 'a' && letter <= 'z' && letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') printf("'%c' is a consonant.", letter);
	else printf("'%c' is not a letter.", letter);

	return 0;
 }
