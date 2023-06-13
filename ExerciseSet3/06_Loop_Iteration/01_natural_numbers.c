/*
Write a C program to print all natural numbers from 1 to n using loop.
C program to print first n natural numbers using loop.
How to print natural numbers in a given range using loop.
Logic to print natural numbers using for loop in C program.
 */

#include <stdio.h>

int main(){

	int n;

	printf("Enter the N value:\n");
	scanf("%d", &n);

	// With for loop:
	for(int i = 1; i <= n; i++) printf("%d ", i);

	// With while loop:
	/* 
	int j = 1;
	while(j <= n){
		printf("%d ", j);
		j++;
	}
	*/

	return 0;
}
