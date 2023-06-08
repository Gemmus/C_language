// Write a program that prompts the user for an integer n (n>0)
// and prints the factorial of the number on the screen.
// For example, the factorial of n is designated n!,
// which means the number calculated as follows: 123...*n

#include <stdio.h>

int main6_2(void){

	int number = 0;
	int result = 1;

	do{
		printf("Enter an integer:  ");
		scanf("%d", &number);
	}while(number <= 0);

	for(int i = 1; i <= number; i++){
		result *= i;
	}

	printf("%d! = %d", number, result);

	return 0;
}
