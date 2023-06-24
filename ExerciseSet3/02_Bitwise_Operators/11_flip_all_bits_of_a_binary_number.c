/*
Write a C program to input a number from user and flip all bits of the given number (in binary representation) using bitwise operator.
How to flip all bits of a binary number using bitwise operator in C programming.

To flip all bits of a binary number you can run loop from 0 to size of the integer and flip individual bit at a time. 
However, C language has given bitwise complement ~ operator for the purpose.
Bitwise complement ~ evaluates complement of the operand bit. It evaluate to 1 if corresponding bit of the operand is 0 otherwise evaluate to 0.
Therefore to flip all bits of a number say num, you can use ~num.
*/

#include <stdio.h>

int main()
{
  int number, flipped;
  
  printf("Enter any number: ");
  scanf("%d", &number);

  flipped = ~number;

  printf("Original number = %d (in decimal).\n", number);
  printf("Number after bits are flipped = %d (in decimal),", flipped);
  
  return 0;
}
