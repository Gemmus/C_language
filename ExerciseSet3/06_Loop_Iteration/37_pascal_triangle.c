/*
Write a C program to print Pascal triangle up to n rows using loop.
Logic to print Pascal triangle in C programming.
How to print Pascal triangle of n rows using loop in C program.

Pascal triangle is a triangular number pattern named after famous mathematician Blaise Pascal.
Example of first 6 rows:
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
1 5 10 10 5 1
*/

#include <stdio.h>

long long fact(int i);

int main()
{
    int num;
    long long term;

    printf("Enter number of rows : ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        for(int j = i; j<= num; j++)
            printf("%3c", ' ');

        for(int k = 0; k <= i; k++)
        {
            term = fact(i) / (fact(k) * fact(i - k));
            printf("%6lld", term);
        }
        printf("\n");
    }

    return 0;
}

long long fact(int i)
{
    long long factorial = 1;
    while(i >= 1)
    {
        factorial *= i;
        i--;
    }

    return factorial;
}
