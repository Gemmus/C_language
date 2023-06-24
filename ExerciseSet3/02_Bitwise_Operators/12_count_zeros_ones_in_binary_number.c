/*
Write a C program to input a number from user and count total number of ones (1s) and zeros (0s) in the given number using bitwise operator.
How to count zeros and ones in a binary number using bitwise operator in C programming.

1. Input a number from user. Store it in some variable say num.
2. Compute total bits required to store integer in memory i.e. INT_SIZE = sizeof(int) * 8.
3. Initialize two variables to store zeros and ones count, say zeros = 0 and ones = 0.
4. Run a loop from 0 to INT_SIZE. The loop structure should look like for(i=0; i<INT_SIZE; i++).
5. Inside the loop check if Least Significant Bit of a number is set, then increment ones by 1 otherwise increment zeros by 1.
6. Right shift num 1 time i.e. perform num = num >> 1;.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
  int number, zeroCount = 0, oneCount = 0;

  printf("Enter any number: ");
  scanf("%d", &number);

  for(int i = 0; i < INT_SIZE; i++){
    if(number & 1) oneCount++;
    else zeroCount++;

    number >>= 1;
  }

  printf("Total zero bit is %d.\n", zeroCount);
  printf("Total one bit is %d.", oneCount);
  
  return 0;
}
