/*
Write a C program to create menu driven calculator that performs basic arithmetic operations using switch case and functions.
The calculator should input two numbers and an operator from user.
It should perform operation according to the operator entered and must take input in given format.
*/

#include <stdio.h>
#include <math.h>

int main(){

	char operator;
	double num1, num2;

	printf("Enter an operation (+ - * /):\n");
	scanf("%c", &operator);
	printf("Enter first number:\n");
	scanf("%lf", &num1);
	printf("Enter second number:\n");
	scanf("%lf", &num2);

	switch(operator){
	default:
		printf("Invalid operator.");
		break;
	case '+':
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
		break;
	}

	return 0;
}
