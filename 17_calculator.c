#include <stdio.h>

int main17(void) {

	char operator;
	double num1;
	double num2;
	double result;

	printf("Please enter an operation(+, -, *, /):  ");
	scanf("%c", &operator);

	switch(operator) {
	case '+':
		printf("Please enter number one:  ");
		scanf("%lf", &num1);

		printf("Please enter number two:  ");
		scanf("%lf", &num2);

		result = num1 + num2;
		printf("%.3lf + %.3lf = %.3lf", num1, num2, result);
		break;
	case '-':
		printf("Please enter number one:  ");
		scanf("%lf", &num1);

		printf("Please enter number two:  ");
		scanf("%lf", &num2);

		result = num1 - num2;
		printf("%.3lf - %.3lf = %.3lf", num1, num2, result);
		break;
	case '*':
		printf("Please enter number one:  ");
		scanf("%lf", &num1);

		printf("Please enter number two:  ");
		scanf("%lf", &num2);

		result = num1 * num2;
		printf("%.3lf * %.3lf = %.3lf", num1, num2, result);
		break;
	case '/':
		printf("Please enter number one:  ");
		scanf("%lf", &num1);

		printf("Please enter number two:  ");
		scanf("%lf", &num2);

		result = num1 / num2;
		printf("%.3lf + %.3lf = %.3lf", num1, num2, result);
		break;
	default:
		printf("%c is not valid. Please enter a valid operation", operator);
	}


	return 0;
}
