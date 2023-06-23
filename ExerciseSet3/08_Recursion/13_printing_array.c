/*
Write a C program to print all elements of array using recursion.
How to display all elements of an array using recursion.
Logic to print array elements using recursion in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

void printArray(int array[], int start, int length);

int main()
{
    int array[MAX_SIZE];
    int size;

    printf("Enter size of the array:\n");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    printf("The elements in the array: ");
    printArray(array, 0, size);

    return 0;
}

void printArray(int array[], int start, int length){

    if(start >= length) return;

    printf("%d, ", array[start]);

    printArray(array, start + 1, length);

}
