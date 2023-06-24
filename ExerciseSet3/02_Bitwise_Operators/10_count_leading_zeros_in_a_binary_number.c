/*
Write a C program to input any number from user and find total number of leading zeros of the given number. 
How to find total leading zeros of a given number (in binary representation) using bitwise operator in C programming. 
Logic to count total leading zeros of a given number using C programming.

1. Input number from user. Store it in some variable say, num.
2. Find total bits required to store an integer in memory say, INT_SIZE = sizeof(int) * 8.
3. Initialize a variable and set its MSB to 1, say msb = 1 << (INT_SIZE - 1);.
4. Initialize a variable to store leading zeros count, say count = 0;.
5. Run a loop from 0 to INT_SIZE. The loop structure should look like for(i=0; i<INT_SIZE; i++).
6. Inside the loop, left shift num, i times and check its MSB is set or not. If its MSB is set i.e. if((num << i) & msb) then terminate the loop; otherwise increment count by 1.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
  int number, msb = 1 << (INT_SIZE - 1), count = 0; // msb equivalent to 10000000 00000000 00000000 00000000
  
  printf("Enter a number:\n");
  scanf("%d", &number);

  for(int i = 0; i < INT_SIZE; i++) {
    if((number << i) & msb) break;
	  count++;
  }

  printf("Total number of leading zeros in %d is %d", number, count);
  
  return 0;
}
