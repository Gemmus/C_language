/*
Write a C program to input any number from user and clear the nth bit of the given number using bitwise operator.
How to clear nth bit of a given number using bitwise operator in C programming.
How to unset (0) the value of nth bit of a given number in C.

1. Input number and nth bit position to clear from user. Store it in some variable say num and n.
2. Left shift 1, n times i.e. 1 << n.
3. Perform bitwise complement with the above result. So that the nth bit becomes unset and rest of bit becomes set i.e. ~ (1 << n).
4. Finally, perform bitwise AND operation with the above result and num. The above three steps together can be written as num & (~ (1 << n));
*/

#include <stdio.h>

int main()
{
	int number, n, newNumber;

	printf("Enter the number:\n");
	scanf("%d", &number);
	printf("Enter the value of n:\n");
	scanf("%d", &n);

	newNumber =  number & (~ (1 << n)); // Left shifts 1 to n times, perform complement of above, finally perform bitwise AND with num and result of above
	printf("Number before clearing %d bit: %d (in decimal).\n", n, number);
	printf("Number after clearing %d bit: %d (in decimal).\n", n, newNumber);

	return 0;
}
