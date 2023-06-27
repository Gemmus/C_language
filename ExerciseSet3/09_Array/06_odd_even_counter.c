/*
Write a C program to input elements in array from user and count even and odd elements in array.
How to find total number of even and odd elements in a given array using C programming.
Logic to count even and odd elements in array using loops.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, oddCount = 0, evenCount = 0;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    for(int i = 0; i < size; i++)
       {
           if(array[i] % 2 == 0) evenCount++;
           else oddCount++;
       }

    printf("The number of even elements in the array: %d.\n", evenCount);
    printf("The number of odd elements in the array: %d.", oddCount);

    return 0;
}
