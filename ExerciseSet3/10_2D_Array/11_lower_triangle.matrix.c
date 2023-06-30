/*
Write a C program to read elements in a matrix and check whether the matrix is a lower triangular matrix or not.
C program to find whether the matrix is lower triangular or not.
Logic to find lower triangular matrix in C programming.

Lower triangular matrix is a special square matrix whose all elements above the main diagonal is zero.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, lower = 1;

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
            if((column > row) && (array[row][column] != 0))
            {
                lower = 0;
                row = SIZE;
                column = SIZE;
            }
        }
    }

    if(lower == 1) printf("The matrix is lower triangle.");
    else printf("The matrix is not lower triangle.");

    return 0;
}
