/*
Write a C program to read elements in a matrix and interchange elements of primary(major) diagonal with secondary(minor) diagonal.
C program for interchanging diagonals of a matrix.
Logic to interchange diagonals of a matrix in C programming.

Example:
Input matrix elements:
1 2 3
4 5 6
7 8 9

Matrix after interchanging its diagonal:
3 2 1
4 5 6
9 8 7
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, temp;

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
        column = row;

        temp = array[row][column];
        array[row][column] = array[row][(SIZE - column) - 1];
        array[row][(SIZE - column) - 1] = temp;
    }

    printf("\nThe matrix after diagonals interchange:\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            printf("%d ", array[row][column]);
        }
        printf("\n");
    }

    return 0;
}
