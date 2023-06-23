/*
Write a recursive function in C to find sum of all even or odd numbers in a given range.
How to find sum of all even numbers between 1 to n using recursion in C programming.
*/

#include <stdio.h>

int oddEvenSummary(int start, int end);

int main()
{
    int lower, upper, result;

    printf("Enter the lower limit:\n");
    scanf("%d", &lower);
    printf("Enter the upper limit:\n");
    scanf("%d", &upper);

    result = oddEvenSummary(lower, upper);
    printf("The summary of the odd numbers between %d and %d: %d.", lower, upper, result);

    return 0;
}

int oddEvenSummary(int start, int end){

	if(start > end) return 0;
	else return start += oddEvenSummary(start + 2, end);
}
