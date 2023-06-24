/*
Write a C program to input any number from user and find highest order set bit of given number using bitwise operator.
How to find the highest order of the set bit of a given number using bitwise operator in C programming.
Logic to get highest order set bit of a number in C programming.

1. Input number from user. Store it in some variable say, num.
2. Find total bits required to store an integer in memory say, INT_SIZE = sizeof(int) * 8.
3. Run a loop from 0 to INT_SIZE. The loop structure should look like for(i=0; i<INT_SIZE; i++).
4. Initialize a variable to store highest order, say order = -1;.
5. Inside the loop if i^th bit is set then update order to i i.e. order = i;.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
  int number, order = -1;

  printf("Enter a number:\n");
  scanf("%d", &number);

  for(int i = 0; i < INT_SIZE; i++) if((number >> i) & 1) order = i;

  if (order != -1) printf("Highest order set bit in %d is %d.", number, order);
  else printf("0 has no set bits.");

  return 0;
}
