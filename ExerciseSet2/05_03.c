// Write a simple calculator program that calculates the difference, sum or product of two numbers.
// First, the program asks which calculation to perform.
// After this, the program prompts for the numbers, performs the calculation and prints the result.
// The selection within the program has to be done using a switch() statement.

#include <stdio.h>

struct numberAskers {
	float number1, number2;
};

struct numberAskers funct(){
	struct numberAskers result;
	printf("\nEnter first number:  ");
	scanf("%f", &result.number1);
	printf("Enter second number:  ");
	scanf("%f", &result.number2);

	return result;
}

int main5_3(void){

	char operation;
	struct numberAskers result;

	printf("Enter the operation: (+ - *)  ");
	scanf("%c", &operation);

	switch(operation){
	default:
		printf("Invalid operation.\n");
		break;
	case '+':
		result = funct();
		printf("\n%.2f + %.2f = %.2f", result.number1, result.number2, result.number1 + result.number2);
		break;
	case '-':
		result = funct();
		printf("\n%.2f - %.2f = %.2f", result.number1, result.number2, result.number1 - result.number2);
		break;
	case '*':
		result = funct();
		printf("\n%.2f * %.2f = %.2f", result.number1, result.number2, result.number1 * result.number2);
		break;
	}

	return 0;
}
