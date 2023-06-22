/*
Write a C program to find sum of all prime numbers between 1 to n using for loop.
C program to generate sum of all primes between a given range.
Logic to find sum of prime numbers in a given range.
*/

#include <stdio.h>

int main()
{
    int number, prime, sum = 0;

    printf("Enter the maximum value:\n");
    scanf("%d", &number);

    for(int i = 2; i <= number; i++)
       {
           prime = 1;

           for( int j = 2; j <= i / 2; j++)
           {
               if(i % j == 0)
               {
                   prime = 0;
                   break;
               }
           }

           if(prime==1) sum += i;
       }

    printf("The sum of all primes until number %d: %d.", number, sum);

    return 0;
}
