/*
Write a C program to find sum of all odd numbers from 1 to n using for loop.
How to find sum of all odd numbers in a given range in C programming.
Logic to find sum of odd numbers in a given range using loop in C programming.
*/

#include <stdio.h>

int main(){

	int n, total = 0;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = 2; i <= n; i += 2) total += i;
	printf("%d", total);

	return 0;
}
