/*
Write a C program to right rotate an array by n position.
How to right rotate an array n times in C programming.
Logic to rotate an array to right by n position in C program.
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

    printf("Enter number of times to right rotate: ");
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
    int last = array[SIZE - 1];

    for(int i = SIZE - 1; i >= 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = last;
}

void printArray(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d, ", array[i]);
    }
}
