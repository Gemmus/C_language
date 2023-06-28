/*
Write a C program to input elements in two array and merge two array to third array.
How to merge two array in C programming.
Logic to merge two sorted array to third array in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array1[MAX_SIZE], size1, index1 = 0, array2[MAX_SIZE], size2, index2 = 0;

    printf("Enter the number of the first elements:\n");
    scanf("%d", &size1);
    printf("Enter the elements:\n");
    for(int i = 0; i < size1; i++) scanf("%d", &array1[i]);

    printf("Enter the number of the second elements:\n");
    scanf("%d", &size2);
    printf("Enter the elements:\n");
    for(int i = 0; i < size2; i++) scanf("%d", &array2[i]);

    int array3[MAX_SIZE * 2], size3 = size1 + size2, index3;

    for(index3 = 0; index3 < size3; index3++){
        if(index1 >= size1 || index2 >= size2) break;
        if(array1[index1] < array2[index2])
        {
        	array3[index3] = array1[index1];
            index1++;
        }
        else
        {
            array3[index3] = array2[index2];
            index2++;
        }
    }

    while(index1 < size1)
      {
          array3[index3] = array1[index1];
          index3++;
          index1++;
      }
      while(index2 < size2)
      {
          array3[index3] = array2[index2];
          index3++;
          index2++;
      }

    printf("The merged array: ");
    for(int i = 0; i < size3; i++) printf("%d, ", array3[i]);

    return 0;
}
