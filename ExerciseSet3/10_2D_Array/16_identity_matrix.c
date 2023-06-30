/*
Write a C program to read elements in a matrix and check whether matrix is an Identity matrix or not.
C program for finding Identity matrix.
Logic to check identity matrix in C programming.

Identity matrix is a special square matrix whose main diagonal elements is equal to 1 and other elements are 0.
Identity matrix is also known as unit matrix.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array[SIZE][SIZE], row, column, identity = 1;

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
        	if(row == column){
        		if(array[row][column] != 1){
        			identity = 0;
        			row = SIZE;
        			column = SIZE;
        		}
        	}
        	else{
        		if(array[row][column] != 0){
        			identity = 0;
        			row = SIZE;
        			column = SIZE;
        		}
        	}
        }
    }

    if(identity == 1) printf("The matrix is identity matrix.");
    else printf("The matrix is not identity matrix.");

    return 0;
}
