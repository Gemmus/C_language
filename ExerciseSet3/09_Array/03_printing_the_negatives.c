/*
Write a C program to read elements in an array and find the sum of array elements.
C program to find sum of elements of the array. 
How to add elements of an array using for loop in C programming. 
Logic to find sum of array elements in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    printf("The negative elements of the array: ");
    for(int i = 0; i < size; i++) if(array[i] < 0) printf("%d, ", array[i]);

    return 0;
}
