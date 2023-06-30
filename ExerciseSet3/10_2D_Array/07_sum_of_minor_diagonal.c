/*
Write a C program to read elements in a matrix and find the sum of minor diagonal (opposite diagonal) elements.
C program to calculate sum of minor diagonal elements.
Logic to find sum of opposite diagonal elements of a matrix in C programming.
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

    for(row = 0; row < SIZE; row++){
    	for(column = 0; column < SIZE; column++){
    		if((row + column) == (SIZE - 1)) sum += array[row][column];
    	}
    }

    printf("The sum of minor diagonal elements of the matrix is: %d.", sum);

    return 0;
}
