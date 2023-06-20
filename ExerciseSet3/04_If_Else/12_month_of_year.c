/*
Write a C program to enter month number between(1-12) and print number of days in month using if else.
How to print number of days in a given month using if else in C programming.
Logic to find number of days in a month in C program.
*/

#include <stdio.h>

int main(void){

	int num;

	printf("Enter a number(1-12):  ");
	scanf("%d", &num);

	if(num == 1) printf("It's January!");
	else if(num == 2) printf("It's February!");
	else if(num == 3) printf("It's March!");
	else if(num == 4) printf("It's April!");
	else if(num == 5) printf("It's May!");
	else if(num == 6) printf("It's June!");
	else if(num == 7) printf("It's July!");
	else if(num == 8) printf("It's August!");
	else if(num == 9) printf("It's September!");
	else if(num == 10) printf("It's October!");
	else if(num == 11) printf("It's November!");
	else if(num == 12) printf("It's December!");
	else printf("Invalid input.");

	return 0;
 }
