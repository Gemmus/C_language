/*
Write a C program to read elements in a matrix and find transpose of the given matrix.
How to find transpose of a given matrix in C. Logic to find transpose of a matrix in C programming.

Transpose of a matrix A is defined as converting all rows into columns and columns into rows.
Transpose of matrix A is written as AT.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], arrayTranspose[SIZE][SIZE], row, column;

    printf("Enter elements in matrix(size: 3 x 3):\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            scanf("%d", &array[row][column]);
        }
    }

    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++){
        	arrayTranspose[column][row] = array[row][column];
        }
    }

    printf("\nThe original array:");
    for(row = 0; row < SIZE; row++)
    {
    	printf("\n");
        for(column = 0; column < SIZE; column++){
        	printf("%d ",array[column][row]);
        }
    }

    printf("\n\nThe transpose array:");
    for(row = 0; row < SIZE; row++)
    {
    	printf("\n");
        for(column = 0; column < SIZE; column++){
        	printf("%d ",arrayTranspose[column][row]);
        }
    }

    return 0;
}
