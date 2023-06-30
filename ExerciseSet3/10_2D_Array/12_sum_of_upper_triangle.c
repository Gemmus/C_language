/*
Write a C program to read elements in a matrix and find sum of upper triangular matrix.
How to find sum of upper triangular matrix in C.
Logic to find sum of upper triangular matrix.

Upper triangular matrix is a special square matrix whose all elements below main diagonal is zero.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, sum = 0;

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
            if(column < row)
            {
                sum += array[row][column];
            }
        }
    }

    printf("The sum of the upper triangle is: %d.", sum);

    return 0;
}
