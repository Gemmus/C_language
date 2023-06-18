/*
Write a C program to input a number and check positive negative or zero using switch case.
Checking negative, positive or zero using switch case is little tricky.
In this example, I will explain how to check positive negative or zero using switch case.
However, it is not recommended way, it’s just for learning.
*/

#include <stdio.h>

int main(){

	int num;

	printf("Enter a number:\n");
	scanf("%d", &num);

	switch(num > 0){
	default:
		printf("Invalid input.");
		break;
	case 1:
		printf("%d is positive.", num);
		break;
	case 0:
		switch(num < 0){
		case 1:
			printf("%d is negative.", num);
			break;
		case 0:
			printf("%d is zero.", num);
			break;
		}
	}

	return 0;
}
