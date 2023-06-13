/*
Write a C program to input week number(1-7) and print day of week name using switch case.
C program to find week day name using switch case.
How to find day name of week using switch case in C programming.
 */

#include <stdio.h>

int main(){

	int number;

	printf("Enter a number(1-7):  ");
	scanf("%d", &number);

	switch(number){
	default:
		printf("Invalid input.");
		break;
	case 1:
		printf("It's Monday.");
		break;
	case 2:
		printf("It's Tuesday.");
		break;
	case 3:
		printf("It's Wednesday.");
		break;
	case 4:
		printf("It's Thursday.");
		break;
	case 5:
		printf("It's Friday.");
		break;
	case 6:
		printf("It's Saturday.");
		break;
	case 7:
		printf("It's Sunday.");
		break;
	}

	return 0;
}
