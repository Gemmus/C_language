/*
Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
How to the minimum number of notes required for the given amount in C programming.
Program to find minimum number of notes required for the given denomination.
Logic to find minimum number of denomination for a given amount in C program.
*/

#include <stdio.h>

int main(void){

	int sum, temp, note500, note100, note50, note20, note10, note5, note2, note1;

	printf("Enter the sum:  ");
	scanf("%d", &sum);

	temp = sum;

	if(temp >= 500)
	{
		note500 = temp / 500;
		temp = temp % 500;
	}
	if(temp >= 100)
	{
		note100 = temp / 100;
		temp = temp % 100;
	}
	if(temp >= 50)
	{
		note50 = temp / 50;
		temp = temp % 50;
	}
	if(temp >= 20)
	{
		note20 = temp / 20;
		temp = temp % 20;
	}
	if(temp >= 10)
	{
		note10 = temp / 10;
		temp = temp % 10;
	}
	if(temp >= 5)
	{
		note5 = temp / 5;
		temp = temp % 5;
	}
	if(temp >= 2)
	{
		note2 = temp / 2;
		temp = temp % 2;
	}
	if(temp >= 1)
	{
		note1 = temp;
		temp = 0;
	}

	printf("The sum of %d consist of: \n", sum);
	printf("%d piece(s) of 500 note, %d piece(s) of 100 note, %d piece(s) of 50 note, %d piece(s) of 20 note,\n", note500, note100, note50, note20);
	printf("%d piece(s) of 10 note, %d piece(s) of 5 note, %d piece(s) of 2 note, %d 1 piece(s) of note.\n", note10, note5, note2, note1);

	return 0;
 }
