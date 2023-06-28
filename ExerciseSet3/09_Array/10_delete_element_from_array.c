/*
Write a C program to delete element from array at specified position.
How to remove element from array at given position in C programming.
Logic to remove element from any given position in array in C program.
The program should also print an error message if the delete position is invalid.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, index;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    printf("Enter the index of deletion:\n");
    scanf("%d", &index);

    while(index < 0 || index > size)
    {
        printf("Invalid input. Enter a valid index of deletion:\n");
        scanf("%d", &index);
    }

    for(int i = index; i < size -  1; i++){
    	array[i] = array[i + 1];
    }

    size--;

    printf("The new, deleted array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", array[i]);

    return 0;
}
