/*
Write a C program to input two numbers from user and find LCM (Lowest Common Multiple) using loop.
How to find LCM of two given numbers in C programming.
Logic to find LCM of two number in C program.

LCM is a smallest positive integer that exactly divides two or more numbers.
*/

#include <stdio.h>

int main()
{
    int num1, num2, max, i, lcm = 1;

    printf("Enter first and second number:\n");
    scanf("%d%d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    i = max;

    while(1)
    {
        if((i % num1 == 0) && (i % num2 == 0))
        {
            lcm = i;
            break;
        }
        i += max;
    }

    printf("LCM of the two numbers is: %d.", lcm);

    return 0;
}
