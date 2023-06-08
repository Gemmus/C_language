// Write a program that prompts the user for an integer n (n>0)
// and prints the numbers 1,2,3...n on the screen one below the other.
// Write the program using the FOR statement.

#include <stdio.h>

int main6_1(void){

	int times = 0;

	do{
		printf("Enter an integer:  ");
		scanf("%d", &times);
	}while(times <= 0);

	for(int i = 1; i <= times; i++){
		printf("%d\n", i);
	}

	return 0;
}
