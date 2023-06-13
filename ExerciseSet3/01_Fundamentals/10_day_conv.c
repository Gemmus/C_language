/*
Write a C program to input number of days from user and convert it to years, weeks and days.
How to convert days to years, weeks in C programming.
Logic to convert days to years, weeks and days in C program.
 */

#include <stdio.h>
#include <math.h>

int main(){

	int number , day, week, year;

	printf("Enter the number of days:  ");
	scanf("%d", &number);

	year = number / 365;
	week = (number % 365) / 7;
	day = number - year * 365 - week * 7;

	printf("%d days consist of %d year(s), %d week(s) and %d day(s).", number, year, week, day);

	return 0;
}

