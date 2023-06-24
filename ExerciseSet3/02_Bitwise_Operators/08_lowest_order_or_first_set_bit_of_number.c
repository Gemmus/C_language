/*
Write a C program to input any number from user and find lowest order set bit of given number using bitwise operator.
How to find first set bit in a given number using bitwise operator in C programming.
Logic to get first set bit of a number using C program.

1. Input number from user. Store it in some variable say, num.
2. Find total bits required to store an integer in memory say, INT_SIZE = sizeof(int) * 8.
3. Run a loop from 0 to INT_SIZE. The loop structure should look like for(i=0; i<INT_SIZE; i++).
4. Initialize a variable to store lowest order set bit, say order = 0;.
5. Inside the loop if i^th bit is set then update order to i i.e. order = i; and terminate from loop.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
  int number, order = INT_SIZE - 1;

  printf("Enter a number:\n");
  scanf("%d", &number);

  for(int i = 0; i < INT_SIZE; i++) {
  if((number >> i) & 1){
    order = i;
    break;
		}
	}

  printf("Lowest order set bit in %d is %d.", number, order);

  return 0;
}
