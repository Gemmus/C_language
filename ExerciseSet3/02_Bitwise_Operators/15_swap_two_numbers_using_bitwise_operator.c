/*
Write a C program to input any two numbers from user and swap values of both numbers using bitwise operator. 
How to swap two number using bitwise operator in C programming. 
Logic to swap two numbers using bitwise operator in C programming.

We can use bitwise XOR ^ operator to swap to numbers. 
Bitwise XOR operator evaluates each bit of the result to 1 if corresponding bits of the operands are different otherwise evaluates 0.
Suppose two integer values a and b
Perform, x = a ^ b
Now x ^ b will evaluate to a
and x ^ a will evaluate to b.
*/

#include <stdio.h>
#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter any two numbers:\n");
  scanf("%d%d", &num1, &num2);

  printf("Original value of num1 = %d\n", num1);
  printf("Original value of num2 = %d\n", num2);

  num1 ^= num2;
  num2 ^= num1;
  num1 ^= num2;

  printf("Num1 after swapping = %d\n", num1);
  printf("Num2 after swapping = %d\n", num2);

  return 0;
}
