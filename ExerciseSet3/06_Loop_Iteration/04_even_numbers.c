/*
Write a C program to print all even numbers from 1 to n using for loop.
C program to generate all even numbers between given range.
Logic to print even numbers using if else and for loop in given range in C programming.
*/

#include <stdio.h>

int main(){

	int n;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i += 2) printf("%d ", i);

	//while loop:
	/*
	int j = 1;
	while(j <= n){
		printf("%d ", j);
		j += 2;
	}
	*/

	return 0;
}
