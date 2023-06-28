/*
Write a C program to input elements in array and sort array elements in ascending or descending order.
How to sort array in ascending order in C programming.
Logic to sort array in ascending or descending order.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int array[MAX_SIZE], size, temp;

  printf("Enter the number of the elements:\n");
  scanf("%d", &size);
  printf("Enter the elements:\n");
  for(int i = 0; i < size; i++) scanf("%d", &array[i]);

  for(int i = 0; i < size; i++)
  {
    for(int j = i + 1; j < size; j++)
    {
      if(array[i] > array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  printf("\nElements of array in ascending order:\n");
  for(int i = 0; i < size; i++) printf("%d, ", array[i]);

  for(int i = 0; i < size; i++)
  {
    for(int j = i + 1; j < size; j++)
    {
      if(array[i] < array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  printf("\nElements of array in descending order:\n");
  for(int i = 0; i < size; i++) printf("%d, ", array[i]);

  return 0;
}
