/*
Write a C program to read elements in a matrix and perform scalar multiplication of matrix.
C program for scalar multiplication of matrix.
How to perform scalar matrix multiplication in C programming. 
Logic to perform scalar matrix multiplication in C program.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array1[SIZE][SIZE], array2[SIZE][SIZE], row, column, scalar;

    printf("Enter elements in matrix A(size: 3 x 3):\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            scanf("%d", &array1[row][column]);
        }
    }

    printf("Enter elements in matrix A(size: 3 x 3):\n");
    scanf("%d", &scalar);

    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            array2[row][column] = array1[row][column] * scalar;
        }
    }

    for(row = 0; row < SIZE; row++)
    {
    	printf("\n");
        for(column = 0; column < SIZE; column++)
        {
            printf("%d ", array2[row][column]);
        }
    }

    return 0;
}
