/*
Write a recursive function to generate nth fibonacci term in C programming.
How to generate nth fibonacci term in C programming using recursion.
Logic to find nth Fibonacci term using recursion in C programming.
*/

#include <stdio.h>

int fibonacci(int num);

int main()
{
    int number, value;

    printf("Enter the value of n:\n");
    scanf("%d", &number);

    value = fibonacci(number - 1);
    printf("The %d value of the Fibonacci series is: %d.", number, value);

    return 0;
}

int fibonacci(int num){

    if(num == 0) return 0;
    else if(num == 1) return 1;
    else return fibonacci(num - 1) + fibonacci(num - 2);

}
