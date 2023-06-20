/*
Write a C program to input cost price and selling price of a product and check profit or loss.
Also calculate total profit or loss using if else.
How to calculate profit or loss on any product using if else in C programming.
Program to calculate profit and loss of any product in C.
*/

#include <stdio.h>

int main(void){

	int cp, sp;

	printf("Enter cost price: ");
	scanf("%d", &cp);
	printf("Enter selling price: ");
	scanf("%d", &sp);

	if(cp < sp) printf("The profit is %d.", sp - cp);
	else if(cp > sp) printf("The loss is %d.", cp - sp);
	else printf("No loss nor profit is made.");

	return 0;
 }
