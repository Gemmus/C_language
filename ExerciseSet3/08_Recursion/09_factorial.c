/*
Write a recursive function in C to find factorial of a number.
How to find factorial of a number using recursion in C program.
Logic to find factorial of a number using recursion in C programming.
*/

#include <stdio.h>

int factorial(int number);

int main()
{
    int number, result;

    printf("Enter the number:\n");
    scanf("%d", &number);

    result = factorial(number);

    printf("%d! = %d", number, result);

    return 0;
}

int factorial(int number){

	if(number == 1) return number;
	else return number *= factorial(number - 1);
}
