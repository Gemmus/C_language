/*
Write a C program to return multiple value from function.
How to return more than one value from function in C programming.
*/

#include <stdio.h>
#define SIZE 10

int * getNEvenNumbers(const int N, int * numbers);

int main()
{
    int evenNumbers[SIZE];

    getNEvenNumbers(SIZE, evenNumbers);

    printf("First %d even numbers are:\n", SIZE);
    for (int i = 0; i < SIZE; i++) printf("%d ", *(evenNumbers + i));

    return 0;
}

int * getNEvenNumbers(const int N, int * numbers)
{
    for (int i = 0; i < N; i++)
    {
        *(numbers + i) = 2 * (i + 1);
    }

    return numbers;
}
