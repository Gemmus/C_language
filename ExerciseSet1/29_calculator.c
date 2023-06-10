// C program to implement a calculator to do basic arithmetic operations

#include <stdio.h>

int main29(void){

	char operation;
	double num1, num2;

	printf("Enter an operation(+ - * /):  ");
	scanf("%c", &operation);

	switch(operation){
	default:
		printf("Invalid operation.");
		break;
	case '+':
		printf("Enter first number:  ");
		scanf("%lf", &num1);
		printf("Enter second number:  ");
		scanf("%lf", &num2);
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
		break;
	case '-':
		printf("Enter first number:  ");
		scanf("%lf", &num1);
		printf("Enter second number:  ");
		scanf("%lf", &num2);
		printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
		break;
	case '*':
		printf("Enter first number:  ");
		scanf("%lf", &num1);
		printf("Enter second number:  ");
		scanf("%lf", &num2);
		printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
		break;
	case '/':
		printf("Enter first number:  ");
		scanf("%lf", &num1);
		printf("Enter second number:  ");
		scanf("%lf", &num2);
		printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
		break;
	}
	return 0;
}
