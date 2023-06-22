/*
Write a C program input two numbers from user and find the HCF using for loop.
How to find GCD of two given numbers using loops in C programming.
Logic to find HCF of two number in C programming.

HCF (Highest Common Factor) is the greatest number that divides exactly two or more numbers.
HCF is also known as GCD (Greatest Common Divisor) or GCF (Greatest Common Factor).
*/

#include <stdio.h>

int main()
{
    int num1, num2, smaller, hcf;

    printf("Enter first and second number:\n");
    scanf("%d%d", &num1, &num2);

    smaller = (num1 > num2) ? num2 : num1;

    for(int i = 1; i <= smaller; i++){
    	if((num1 % i == 0) && (num2 % i == 0)) hcf = i;
    }

    printf("The HCF of the two numbers is: %d", hcf);

    return 0;
}
