/*
Write a C program to input any decimal number from user and convert it to binary number system using bitwise operator.
How to convert from decimal number system to binary number system using bitwise operator in C programming.
Logic to convert decimal to binary using bitwise operator in C program.

1. Input a decimal number from user. Store it in some variable say num.
2. Declare an array of size required to store an integer in memory (i.e. 8 bits), say bin[INT_SIZE];.
3. Initialize another variable to store index, say index = INT_SIZE - 1;.
4. Run a loop from INT_SIZE to 0. Inside the loop assign Least Significant Bit to bin[index]. Perform bin[index] = num & 1;.
5. Decrement index by 1 and right shift num by 1.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
  int number, index = INT_SIZE - 1, bin[INT_SIZE];

  printf("Enter a number:\n");
  scanf("%d", &number);

  while(index >= 0)
  {
    bin[index] = number & 1;
    index--;
    number >>= 1;
  }

  printf("Converted binary: ");

  for(int i = 0; i < INT_SIZE; i++) printf("%d", bin[i]);

  return 0;
}
