/*
Write a program in C to input a number and check whether the number is prime number or not using for loop.
How to check prime numbers using loop in C programming. 
Logic to check prime numbers in C programming.
*/

#include <stdio.h>

int main()
{
    int number, prime = 1;

    printf("Enter the number:\n");
    scanf("%d", &number);

    for(int i = 2; i < (number / 2); i++)
    {
    	if(number % i == 0){
    		prime = 0;
    		break;
    	}
    }

    if(prime == 1) printf("%d is a prime number.", number);
    else printf("%d is not a prime number.", number);

    return 0;
}
