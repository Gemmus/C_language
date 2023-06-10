// C program to find the Nth term in a Fibonacci series using recursion

#include <stdio.h>

int fibonacciValue(int n){
	if(n == 1) return 0;
	else if(n == 2) return 1;
    else return fibonacciValue(n - 1) + fibonacciValue(n - 2);
}

int main27(void){

	int n;

	printf("Enter a N value:  ");
	scanf("%d", &n);

	printf("The %dth term in a Fibonacci is: %d.", n, fibonacciValue(n));

	return 0;
}
