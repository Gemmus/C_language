/*
Write a C program to input elements in array and count negative elements in array.
C program to find all negative elements in array.
How to count negative elements in array using loop in C programming.
Logic to count total negative elements in an array in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, negCount = 0;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    for(int i = 0; i < size; i++)
       {
           if(array[i] < 0) negCount++;
       }

    printf("The number of negative elements in the array: %d.", negCount);

    return 0;
}
