/*
Write a C program to read elements in a matrix and find the sum of elements of each row and columns of matrix.
C program to calculate sum of rows and columns of matrix.
Logic to find sum of each row and columns of a matrix in C programming.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, sum;

    printf("Enter elements in matrix(size: 3 x 3):\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            scanf("%d", &array[row][column]);
        }

    }

    for(row = 0; row < SIZE; row++){
    	sum = 0;
    	for(column = 0; column < SIZE; column++){
    		sum += array[row][column];
    	}
    	printf("Sum of elements of #%d row is: %d.\n", row + 1, sum);
    }

    for(row = 0; row < SIZE; row++){
    	sum = 0;
    	for(column = 0; column < SIZE; column++){
    		sum += array[column][row];
    	}
    	printf("Sum of elements of #%d column is: %d.\n", row + 1, sum);
    }

    return 0;
}
