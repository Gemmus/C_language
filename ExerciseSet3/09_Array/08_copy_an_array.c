/*
Write a C program to input elements in array and copy all elements of first array into second array.
How to copy array elements to another array in C programming.
Logic to copy array elements in C program using loop.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, arrayCopy[MAX_SIZE];

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    for(int i = 0; i < size; i++)
       {
           arrayCopy[i] = array[i];
       }

    printf("The numbers of the original array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", array[i]);
    printf("\n");
    printf("The numbers of the copied array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", arrayCopy[i]);

    return 0;
}
