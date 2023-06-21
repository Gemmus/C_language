/*
Write a C program to print all natural numbers in reverse from n to 1 using for loop.
How to print natural numbers in reverse order in C programming.
Logic to print natural numbers in reverse for a given range in C program.
*/

#include <stdio.h>

int main(){

	int n;

	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for(int i = n; i > 0; i--) printf("%d ", i);

	// while loop:
	/*
	while(n > 0){
		printf("%d ", n);
		n--;
	}
	*/

	return 0;
}
