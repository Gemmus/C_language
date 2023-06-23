/*
Write a recursive function in C programming to calculate sum of digits of a number.
How to calculate sum of digits of a given number using recursion in C program.
Logic to find sum of digits using recursion in C programming.
*/

#include <stdio.h>

int sumDigits(int num);

int main()
{
    int number, sum;

    printf("Enter a number:\n");
    scanf("%d", &number);

    sum = sumDigits(number);
    printf("The sum of the digits of number %d is: %d.", number, sum);

    return 0;
}

int sumDigits(int num){

    if(num == 0) return 0;
    else return num % 10 + sumDigits(num / 10);

}
