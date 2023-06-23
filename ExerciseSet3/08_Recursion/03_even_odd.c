/*
Write a recursive function in C programming to print all even or odd numbers between given range.
How to print all even numbers in given range using recursion in C programming.
Logic to print even/odd numbers in given range using recursion.
*/

#include <stdio.h>

void oddPrinter(int start, int end);
void evenPrinter(int start, int end);

int main()
{
    int lower, upper;

    printf("Enter the lower limit:\n");
    scanf("%d", &lower);
    printf("Enter the upper limit:\n");
    scanf("%d", &upper);

    printf("The odd numbers in the given range: ");
    oddPrinter(lower, upper);

    printf("\n");

    printf("The even numbers in the given range: ");
    evenPrinter(lower, upper);

    return 0;
}

void oddPrinter(int start, int end){

	if(start > end) return;

	if(start % 2 != 0) printf("%d, ", start);

	oddPrinter(start + 1, end);
}

void evenPrinter(int start, int end){

	if(start > end) return;

	if(start % 2 == 0) printf("%d, ", start);

	evenPrinter(start + 1, end);
}
