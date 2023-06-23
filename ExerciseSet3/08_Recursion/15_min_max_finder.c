/*
Write a C program to find maximum and minimum elements in an array using recursion.
How to find maximum and minimum element in an array using recursion in C programming.
Logic to find find maximum or minimum elements in array in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int maxFinder(int array[], int i, int length);
int minFinder(int array[], int i, int length);

int main()
{
    int array[MAX_SIZE], size, max, min;

    printf("Enter size of the array:\n");
    scanf("%d", &size);

    printf("Enter %d elements in array:\n", size);
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    max = maxFinder(array, 0, size);
    min = minFinder(array, 0, size);

    printf("The minimum value of the array: %d.\n", min);
    printf("The maximum value of the array: %d.\n", max);

    return 0;
}

int maxFinder(int array[], int i, int length)
{
    int max;

    if(i >= length - 2) {
        if(array[i] > array[i + 1]) return array[i];
        else return array[i + 1];
    }

    max = maxFinder(array, i + 1, length);

    if(array[i] > max) return array[i];
    else return max;
}

int minFinder(int array[], int i, int length)
{
    int min;

    if(i >= length - 2) {
        if(array[i] < array[i + 1]) return array[i];
        else return array[i + 1];
    }

    min = minFinder(array, i + 1, length);

    if(array[i] < min) return array[i];
    else return min;
}
