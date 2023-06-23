/*
Write a recursive function in C programming to find sum of all natural numbers between 1 to n.
How to find sum of all natural numbers using recursion in C program.
Logic to find sum of natural numbers in given range using recursion.
*/

#include <stdio.h>

int sumNaturals(int start, int end);

int main()
{
    int lower = 1, upper, sum;

    printf("Enter the upper limit:\n");
    scanf("%d", &upper);

    sum = sumNaturals(lower, upper);

    printf("The sum of natural numbers between 1 and %d: %d.", upper, sum);

    return 0;
}

int sumNaturals(int start, int end){

	if(start == end) return start;
	else return start += sumNaturals(start + 1, end);
}
