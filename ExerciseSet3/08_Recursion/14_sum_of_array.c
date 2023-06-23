/*
Write a C program to find sum of array elements using recursion.
How to find sum of array elements using recursive function in C programming.
Logic to find sum of array elements using recursion in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int sumArray(int array[], int start, int length);

int main()
{
    int array[MAX_SIZE];
    int size, sum;

    printf("Enter size of the array:\n");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    sum = sumArray(array, 0, size);
    printf("The sum of the array: %d.", sum);

    return 0;
}

int sumArray(int array[], int start, int length){

    if(start >= length) return 0;

    return array[start] += sumArray(array, start + 1, length);

}
