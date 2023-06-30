/*
Write a C program to read elements in a matrix and check whether the matrix is upper triangular matrix or not.
C program to check upper triangular matrix.
Logic to find upper triangular matrix in C programming.

Upper triangular matrix is a special square matrix whose all elements below the main diagonal is zero.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, upper = 1;

    printf("Enter elements in matrix(size: 3 x 3):\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            scanf("%d", &array[row][column]);
        }

    }

    for(row = 0; row < SIZE ; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            if((column < row) && (array[row][column] != 0))
            {
                upper = 0;
                row = SIZE;
                column = SIZE;
            }
        }
    }

    if(upper == 1) printf("The matrix is upper triangle.");
    else printf("The matrix is not upper triangle.");

    return 0;
}
