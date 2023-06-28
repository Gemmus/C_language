/*
Write a C program to read elements in two matrices and find the difference of two matrices. 
Program to subtract two matrices in C. 
Logic to subtract two matrices in C programming.
*/

#include <stdio.h>
#define SIZE 3

#include <stdio.h>
#define SIZE 3

int main()
{
  int array1[SIZE][SIZE], array2[SIZE][SIZE], array3[SIZE][SIZE], row, column;
  
  printf("Enter elements in matrix A(size: 3 x 3):\n");
  for(row = 0; row < SIZE; row++)
  {
    for(column = 0; column < SIZE; column++) scanf("%d", &array1[row][column]);
  }

  printf("Enter elements in matrix B(size: 3 x 3):\n");
  for(row = 0; row < SIZE; row++)
  {
    for(column = 0; column < SIZE; column++) scanf("%d", &array2[row][column]);
  }

  for(row = 0; row < SIZE; row++)
  {
    for(column = 0; column < SIZE; column++) array3[row][column] = array1[row][column] - array2[row][column];
  }

  for(row = 0; row < SIZE; row++)
  {
    printf("\n");
    for(column = 0; column < SIZE; column++) printf("%d ",array3[row][column]);
  }

  return 0;
}
