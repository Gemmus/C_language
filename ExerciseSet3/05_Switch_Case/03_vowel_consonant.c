/*
Write a C program to input an alphabet and check whether it is vowel or consonant using switch case.
C program to check vowel or consonant using switch case.
Logic to check vowel or consonant using switch case.
 */

#include <stdio.h>
#include <ctype.h>

int main(){

	char letter;

	printf("Enter a letter:\n");
	scanf("%c", &letter);
	letter = tolower(letter);

	switch(letter){
	default:
		printf("Invalid input, %c is not a letter.", letter);
		break;
	case 'a':
		printf("Vowel.");
		break;
	case 'e':
		printf("Vowel.");
		break;
	case 'i':
		printf("Vowel.");
		break;
	case 'o':
		printf("Consonant.");
		break;
	case 'u':
		printf("Consonant.");
		break;
	case 'b':
		printf("Consonant.");
		break;
	case 'c':
		printf("Consonant.");
		break;
	case 'd':
		printf("Consonant.");
		break;
	case 'f':
		printf("Consonant.");
		break;
	case 'g':
		printf("Consonant.");
		break;
	case 'h':
		printf("Consonant.");
		break;
	case 'j':
		printf("Consonant.");
		break;
	case 'k':
		printf("Consonant.");
		break;
	case 'l':
		printf("Consonant.");
		break;
	case 'm':
		printf("Consonant.");
		break;
	case 'n':
		printf("Consonant.");
		break;
	case 'p':
		printf("Consonant.");
		break;
	case 'q':
		printf("Consonant.");
		break;
	case 'r':
		printf("Consonant.");
		break;
	case 's':
		printf("Consonant.");
		break;
	case 't':
		printf("Consonant.");
		break;
	case 'v':
		printf("Consonant.");
		break;
	case 'w':
		printf("Consonant.");
		break;
	case 'x':
		printf("Consonant.");
		break;
	case 'y':
		printf("Consonant.");
		break;
	case 'z':
		printf("Consonant.");
		break;
	}

	return 0;
}
