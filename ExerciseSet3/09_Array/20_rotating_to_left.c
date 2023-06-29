/*
Write a C program to left rotate an array by n position.
How to rotate left rotate an array n times in C programming.
Logic to rotate an array to left by n position in C program.
*/

#include <stdio.h>
#define SIZE 10

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int array[SIZE], times;

    printf("Enter 10 elements array:\n");
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter number of times to left rotate: ");
    scanf("%d", &times);

    printf("Array before rotation:\n");
    printArray(array);

    for(int i = 1; i <= times; i++)
    {
        rotateByOne(array);
    }

    printf("\nArray after rotation:\n");
    printArray(array);

    return 0;
}


void rotateByOne(int array[])
{
    int first = array[0];

    for(int i = 0; i < SIZE - 1; i++)
    {
        array[i] = array[i + 1];
    }

    array[SIZE - 1] = first;
}

void printArray(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d, ", array[i]);
    }
}
