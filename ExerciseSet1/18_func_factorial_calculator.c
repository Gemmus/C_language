// C program to find the factorial of a number using recursion

#include <stdio.h>

int factorialCalc(int number){

	int product;
	if(number == 1) return product = 1;
	else{
		product = number * factorialCalc(number - 1);
	}
	return product;
}

int main18(void){

	int number;

	printf("Enter a number:  ");
	scanf("%d", &number);

	int result = factorialCalc(number);

	printf("%d! = %d", number, result);

	return 0;
}
