/*
Write a C program to read elements in a matrix and find the sum of main diagonal (major diagonal) elements of matrix.
Find sum of all elements of main diagonal of a matrix.
Logic to find sum of main diagonal elements of a matrix in C programming.
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

    for(int i = 0; i < SIZE; i++){
    	sum += array[i][i];
    }

    printf("The sum of main diagonal elements of the matrix is: %d.", sum);

    return 0;
}
