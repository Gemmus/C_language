/*
Write a C program to swap corresponding elements of two arrays using pointers.
How to swap two arrays using pointers in C program.
Logic to swap two arrays of different length using pointers in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);

int main()
{
    int sourceArr[MAX_SIZE], destArr[MAX_SIZE], size;

    printf("Enter size of array:\n");
    scanf("%d", &size);
    printf("Enter %d elements in source array:\n", size);
    inputArray(sourceArr, size);
    printf("Enter %d elements in destination array:\n", size);
    inputArray(destArr, size);

    printf("Source array before swapping:\n");
    printArray(sourceArr, size);
    printf("\nDestination array before swapping:\n");
    printArray(destArr, size);

    swapArray(sourceArr, destArr, size);

    printf("\nSource array after swapping:\n");
    printArray(sourceArr, size);
    printf("\nDestination array after swapping:\n");
    printArray(destArr, size);

    return 0;
}

void inputArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd) scanf("%d", arr++);
}

void printArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd) printf("%d, ", *(arr++));
}

void swapArray(int * sourceArr, int * destArr, int size)
{
    int * sourceArrEnd = (sourceArr + (size - 1));
    int * destArrEnd   = (destArr + (size - 1));

    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        *sourceArr ^= *destArr;
        *destArr   ^= *sourceArr;
        *sourceArr ^= *destArr;

        sourceArr++;
        destArr++;
    }
}
