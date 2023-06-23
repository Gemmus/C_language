/*
Write a recursive function in C programming to print all natural numbers between 1 to n.
How to print all natural numbers from 1 to n using recursion in C program.
ogic to print all natural numbers in given range using recursion in C programming.
*/

#include <stdio.h>

void naturalPrinter(int start, int end);

int main()
{
    int lower, upper;

    printf("Enter the lower limit:\n");
    scanf("%d", &lower);
    printf("Enter the upper limit:\n");
    scanf("%d", &upper);

    naturalPrinter(lower, upper);

    return 0;
}

void naturalPrinter(int start, int end){

	if(start > end) return;

	printf("%d ", start);

	naturalPrinter(start + 1, end);
}
