/*
Write a C program to find maximum between three numbers using ladder if else or nested if.
How to find maximum or minimum between three numbers using if else in C programming.
Logic to find maximum or minimum between three numbers in C program.
*/

#include <stdio.h>

int main(){

	int num1, num2, num3, max;

	printf("Enter three integer numbers:\n");
	scanf("%d%d%d", &num1, &num2, &num3);

	if(num1 > num2) {
		if(num1 > num3) max = num1;
		else max = num3;
	}
	else if(num2 > num1) {
		if(num2 > num3) max = num2;
		else max = num3;
	}
	else if(num1 == num2) {
		if(num1 > num3) max = num1;
		else max = num3;
	}

	printf("%d is the largest number.", max);

	return 0;
}
