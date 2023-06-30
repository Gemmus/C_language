/*
Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or not.
C program for determining sparse matrix. How to check sparse matrix in C.
Logic to check sparse matrix in C programming.

Sparse matrix is a special matrix with most of its elements are zero.
We can also assume that if (m * n) / 2 elements are zero then it is a sparse matrix.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, total = 0;

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
        	if(array[row][column] == 0) total++;
        }
    }

    if(total > ((row * column) / 2)) printf("The matrix is a sparse matrix.");
    else printf("The matrix is not a sparse matrix.");

    return 0;
}
