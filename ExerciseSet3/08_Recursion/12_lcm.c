/*
Write a C program to find LCM of two numbers using recursion.
How to find LCM of two numbers in C programming using recursion.
Logic to find LCM of two numbers using recursion.
*/

#include <stdio.h>

int lcmFinder(int num1, int num2);

int main()
{
    int num1, num2, lcm;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    lcm = lcmFinder(num1, num2);

    printf("The LCM of %d and %d is: %d.", num1, num2, lcm);
    return 0;
}

int lcmFinder(int num1, int num2){

	 static int multiple = 0;

	 multiple += num1;

    if((multiple % num1 == 0) && (multiple % num2 == 0)) return multiple;
    else return lcmFinder(num1, num2);

}
