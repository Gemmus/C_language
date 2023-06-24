/*
Write a C program to input any number from user and toggle or invert or flip nth bit of the given number using bitwise operator.
How to toggle nth bit of a given number using bitwise operator in C programming.
C program set nth bit of a given number if it is unset otherwise unset if it is set.

1. Input number and nth bit position to toggle from user. Store it in some variable say num and n.
2. Left shift 1 to n times, i.e. 1 << n.
3. Perform bitwise XOR with num and result evaluated above i.e. num ^ (1 << n);.
*/

#include <stdio.h>

int main()
{
	int number, n, newNumber;

	printf("Enter the number:\n");
	scanf("%d", &number);
	printf("Enter the value of n:\n");
	scanf("%d", &n);

	newNumber =  number ^ (1 << n); // Left shifts 1 to n times, perform complement of above, finally perform bitwise AND with num and result of above
	printf("Number before toggling %d bit: %d (in decimal).\n", n, number);
	printf("Number after toggling %d bit: %d (in decimal).\n", n, newNumber);

    return 0;
}
