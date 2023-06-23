/*
Write a recursive function in C to find GCD (HCF) of two numbers.
How to find GCD(Greatest Common Divisor) or HCF(Highest Common Factor) of two numbers using recursion in C program.
Logic to find HCF of two numbers using recursion in C programming.
*/

#include <stdio.h>

int gcdFinder(int num1, int num2);

int main()
{
    int num1, num2, gcd;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    gcd = gcdFinder(num1, num2);

    printf("The GCD of %d and %d is: %d.", num1, num2, gcd);
    return 0;
}

int gcdFinder(int num1, int num2){

    if(num2 == 0) return num1;
    else return gcdFinder(num2, num1 % num2);

}
