/*
Write a C program to input number from user and find sum of all even numbers between 1 to n.
How to find sum of even numbers in a given range using loop in C programming.
Logic to find sum of even numbers in a given range in C program.
*/

#include <stdio.h>

int main(){

	int n, total = 0;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i += 2) total += i;
	printf("%d", total);

	return 0;
}
