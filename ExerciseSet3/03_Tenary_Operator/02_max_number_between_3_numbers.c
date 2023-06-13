/*
Write a C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator ?:.
How to find maximum between three numbers using conditional operator.
 */

#include <stdio.h>

int main(){
	int num1, num2, num3, max;

	printf("Enter a number:  ");
	scanf("%d", &num1);

	printf("Enter a number:  ");
	scanf("%d", &num2);

	printf("Enter a number:  ");
	scanf("%d", &num3);

	max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;

	printf("%d is the largest number.", max);

	return 0;
}
