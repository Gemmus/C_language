/*
Write a C program to input elements in array and find reverse of array.
How to find reverse of array in C programming.
Logic to find reverse of array in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, arrayReversed[MAX_SIZE];

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    int j = 0;
    for(int i = size; i >= 0; i--)
       {
           arrayReversed[j] = array[i - 1];
           j++;
       }

    printf("The numbers of the original array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", array[i]);
    printf("\n");
    printf("The numbers of the reversed array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", arrayReversed[i]);

    return 0;
}
