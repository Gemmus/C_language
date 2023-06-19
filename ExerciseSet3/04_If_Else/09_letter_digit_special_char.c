/*
Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else.
How to check if a character is alphabet, digits or any other special character using if else in C programming.
Logic to check alphabet, digit or special character in C programming.
*/

#include <stdio.h>
int main(void){

	char ch;

	printf("Enter a character:  ");
	scanf("%c", &ch);

	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) printf("'%c' is a letter.", ch);
	else if(ch >= '0' && ch <= '9') printf("'%c' is a digit.", ch);
	else printf("'%c' is a special character.", ch);

	return 0;
 }
