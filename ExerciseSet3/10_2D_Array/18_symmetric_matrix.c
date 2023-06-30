/*
Write a C program to read elements in a matrix and check whether the given matrix is symmetric matrix or not.
How to check symmetric matrix in C.
Logic to check symmetric matrix in C programming.

Symmetric matrix is a square matrix which is equal to its transpose.
A symmetric matrix is always a square matrix.
Symmetric matrix A is defined as :A = AT
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], arrayTranspose[SIZE][SIZE], row, column, symmetric = 1;

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

    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++){
        	if(array[row][column] != arrayTranspose[row][column]){
        		symmetric = 0;
        		row = SIZE;
        		column = SIZE;
        	}
        }
    }

    if(symmetric == 1) printf("The matrix is symmetric.");
    else printf("The matrix is not symmetric.");

    return 0;
}
