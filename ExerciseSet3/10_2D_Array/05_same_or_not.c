/*
rite a C program to enter elements in two matrices and check whether both matrices are equal or not.
C program to check whether elements of two matrices are equal or not.
Logic to check if two matrices are equal or not in C programming.
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int array1[SIZE][SIZE], array2[SIZE][SIZE], row, column, same = 1;

    printf("Enter elements in matrix A(size: 3 x 3):\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            scanf("%d", &array1[row][column]);
        }
    }

    printf("Enter elements in matrix B(size: 3 x 3):\n");
    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
            scanf("%d", &array2[row][column]);
        }
    }

    for(row = 0; row < SIZE; row++)
    {
        for(column = 0; column < SIZE; column++)
        {
        	printf("1: %d, 2: %d\n", array1[row][column], array2[row][column]);
            if(array1[row][column] != array2[row][column])
            {
            	same = 0;
            	row = SIZE;
            	column = SIZE;
            }
        }
    }

    if(same == 1) printf("The two arrays are the same.");
    else printf("The two arrays are not the same.");

    return 0;
}
