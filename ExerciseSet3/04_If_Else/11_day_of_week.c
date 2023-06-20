/*
Write a C program to input week number(1-7) and print the corresponding day of week name using if else.
How to print day of week using if else in C programming.
Logic to convert week number to day of week in C programming.
*/

#include <stdio.h>

int main(void){

	int num;

	printf("Enter a number(1-7):  ");
	scanf("%d", &num);

	if(num == 1) printf("It's Monday!");
	else if(num == 2) printf("It's Tuesday!");
	else if(num == 3) printf("It's Wednesday!");
	else if(num == 4) printf("It's Thursday!");
	else if(num == 5) printf("It's Friday!");
	else if(num == 6) printf("It's Saturday!");
	else if(num == 7) printf("It's Sunday!");
	else printf("Invalid input.");

	return 0;
 }
