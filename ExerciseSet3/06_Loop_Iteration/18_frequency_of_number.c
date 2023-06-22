/*
Write a C program to count frequency of digits in a given number.
How to find frequency of digits in a given number using loop in C programming.
Logic to find total occurrences of each digits in a given number in C program.
*/

#include <stdio.h>
#define BASE 10

int main()
{
    long long number, temp;
    int last;
    int frequency[BASE];

    printf("Enter any number: ");
    scanf("%lld", &number);

    for(int i = 0; i < BASE; i++) frequency[i] = 0;

    temp = number;

    while(temp != 0)
    {
        last = temp % 10;
        temp /= 10;
        frequency[last]++;
    }

    printf("Frequency of each digit in %lld is: \n", number);
    for(int i = 0; i < BASE; i++) printf("Frequency of %d = %d.\n", i, frequency[i]);

    return 0;
}
