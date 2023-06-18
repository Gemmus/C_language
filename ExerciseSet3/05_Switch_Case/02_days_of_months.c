/*
Write a C program to input month number and print total number of days in month using switch...case.
C program to find total number of days in a month using switch...case.
Logic to print number of days in a month using switch...case in C programming.
 */

#include <stdio.h>

int main(){

	int month;

	printf("Enter the number of the months:\n");
	scanf("%d", &month);

	switch(month){
	default:
		printf("Invalid input, %d is not a month.", month);
		break;
	case 1:
		printf("January consist of 31 days.");
		break;
	case 2:
		printf("February consist of 28/29 days.");
		break;
	case 3:
		printf("March consist of 31 days.");
		break;
	case 4:
		printf("April consist of 30 days.");
		break;
	case 5:
		printf("May consist of 31 days.");
		break;
	case 6:
		printf("June consist of 30 days.");
		break;
	case 7:
		printf("July consist of 31 days.");
		break;
	case 8:
		printf("August consist of 31 days.");
		break;
	case 9:
		printf("September consist of 30 days.");
		break;
	case 10:
		printf("October consist of 31 days.");
		break;
	case 11:
		printf("November consist of 30 days.");
		break;
	case 12:
		printf("December consist of 31 days.");
		break;
	}

	return 0;
}
