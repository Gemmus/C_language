/*
Write a C program to declare, initialize, input elements in array and print array.
How to input and display elements in an array using for loop in C programming.
C program to input and print array elements using loop.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int array[MAX_SIZE], size;
  
  printf("Enter the number of the elements:\n");
  scanf("%d", &size);

  printf("Enter the elements:\n");
  for(int i = 0; i < size; i++) scanf("%d", &array[i]);

  for(int i = 0; i < size; i++) printf("%d, ", array[i]);

  return 0;
}
