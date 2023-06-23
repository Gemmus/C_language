/*
Write a recursive function in C programming to find reverse of a number.
How to find reverse of a number in C programming using recursion.
Logic to find reverse of a number using recursion in C programming.
*/

#include <stdio.h>
#include <math.h>

int reverse(int num);

int main()
{
    int number, result;

    printf("Enter a number:\n");
    scanf("%d", &number);

    result = reverse(number);
    printf("The reverse of number %d is: %d.", number, result);

    return 0;
}

int reverse(int num){

    int digit = (int) log10(num);

    if(num == 0) return 0;

    return ((num % 10 * pow(10, digit)) + reverse(num/10));
}
