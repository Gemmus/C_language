/*
Write a C program to input a number from user and print multiplication table of the given number using for loop.
How to print multiplication table of a given number in C programming.
Logic to print multiplication table of any given number in C program.
*/

#include <stdio.h>

int main(){

	int n;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = 1; i < 11; i ++) printf("%d * %d = %d\n", n, i, n * i);

	return 0;
}
