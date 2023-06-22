/*
Write a C program to input a number from user and find Prime factors of the given number using loop.
C program to list all prime factors of a given number.
Logic to find prime factors of a number in C programming.

Factors of a number that are prime numbers are called as Prime factors of that number. For example: 2 and 5 are the prime factors of 10.
*/

#include <stdio.h>

int main()
{
    int number, prime;

    printf("Enter the number:\n");
    scanf("%d", &number);

    for(int i = 2; i <= number; i++)
    {
    	if(number % i == 0){
    		 prime = 1;

    		 for( int j = 2; j <= i / 2; j++)
    		 {
    			 if(i % j == 0)
    		     {
    				 prime = 0;
    		         break;
    		     }
    		 }

    		 if(prime == 1) printf("%d, ", i);
    	}
    }

    return 0;
}
