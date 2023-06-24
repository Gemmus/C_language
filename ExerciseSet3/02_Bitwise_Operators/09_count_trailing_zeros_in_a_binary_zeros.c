/*
Write a C program to input any number from user and count number of trailing zeros in the given number using bitwise operator.
How to find total number of trailing zeros in any given number using bitwise operator in C programming.

1. Input number from user. Store it in some variable say, num.
2. Find total bits required to store an integer in memory say, INT_SIZE = sizeof(int) * 8.
3. Initialize a variable to store trailing zeros count, say count = 0;.
4. Run a loop from 0 to INT_SIZE. The loop structure should look like for(i=0; i<INT_SIZE; i++).
5. Inside the loop if i^th bit is set then terminate from loop; otherwise increment count by 1.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
  int number, count = 0;

  printf("Enter a number:\n");
  scanf("%d", &number);

  for(int i = 0; i < INT_SIZE; i++) {
    if((number >> i) & 1) break;
	  count++;
	}

  printf("Total number of trailing zeros in %d is %d.", number, count);

  return 0;
}
