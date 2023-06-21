/*
Write a C program to find the sum of all natural numbers between 1 to n using for loop.
How to find sum of natural numbers in a given range in C programming.
Logic to find sum of all natural numbers in a given range in C programming.
*/

#include <stdio.h>

int main(){

	int n, total = 0;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) total += i;
	printf("%d", total);

	return 0;
}
