/*
Write a C program to print all odd numbers from 1 to n using for loop.
How to print odd numbers from 1 to n using loop in C programming.
Logic to print odd numbers in a given range in C programming.
*/

#include <stdio.h>

int main(){

	int n;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = 2; i <= n; i += 2) printf("%d ", i);

	//while loop:
	/*
	int j = 2;
	while(j <= n){
		printf("%d ", j);
		j += 2;
	}
	*/

	return 0;
}
