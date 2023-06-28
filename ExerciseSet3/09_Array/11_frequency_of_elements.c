/*
Write a C program to input elements in array and find frequency of each element in array.
How to count occurrence of each element in array in C programming using loop.
Logic to count frequency of each element in array in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
  int array[MAX_SIZE], size, frequency[MAX_SIZE], count;

  printf("Enter the number of the elements:\n");
  scanf("%d", &size);
  printf("Enter the elements:\n");
  for(int i = 0; i < size; i++) 
  {
    scanf("%d", &array[i]);
    frequency[i] = -1;
  }

  for(int i = 0; i < size; i++)
  {
    count = 1;
    for(int j = i + 1; j < size; j++)
    {
      if(array[i] == array[j])
      {
        count++;
        frequency[j] = 0;
      }
    }

    if(frequency[i] != 0)
    {
      frequency[i] = count;
    }
  }

  printf("Frequency of all elements of array : \n");
  for(int i = 0; i < size; i++)
  {
    if(frequency[i] != 0) printf("%d occurs %d times\n", array[i], frequency[i]);
  }

  return 0;
}
