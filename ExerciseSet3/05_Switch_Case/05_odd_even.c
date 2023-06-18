/*
Write a C program to input number from user and check whether the number is even or odd using switch case.
How to check even or odd using switch case in C programming.
Logic to check whether a number is even or odd using switch case in C program.
*/

#include <stdio.h>

int main(){

	int num;

	printf("Enter a number:\n");
	scanf("%d", &num);

	switch(num % 2){
	default:
		printf("Invalid input.");
		break;
	case 0:
		printf("%d is even.", num);
		break;
	case 1:
		printf("%d is odd.", num);
		break;
	}

	return 0;
}
