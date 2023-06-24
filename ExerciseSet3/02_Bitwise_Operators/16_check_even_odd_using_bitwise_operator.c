/*
Write a C program to input any number and check whether the given number is even or odd using bitwise operator. 
How to check whether a number is even or odd using bitwise operator in C programming. 
Logic to check even odd using bitwise operator in C programming.

Least Significant Bit of an odd number is always set (1). 
To check whether a number is even or odd we need to figure out if LSB is set or not.
We use Bitwise AND & operator to check whether a bit is set or not. 
Similarly on performing num & 1 it return LSB of num. 
If LSB is 1 then the given number is odd otherwise even.
*/

#include <stdio.h>

int main()
{
  int num;

  printf("Enter any number: ");
  scanf("%d", &num);

  if(num & 1) printf("%d is odd.", num);
  else printf("%d is even.", num);

  return 0;
}
