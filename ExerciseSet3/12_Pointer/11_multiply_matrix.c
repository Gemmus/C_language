/*
Write a C program to multiply two matrix using pointers.
How to input and multiply two matrix using pointer in C programming.
Logic to multiply two matrix using pointer in C.
*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS]);
void printMatrix(int matrix[][COLS]);
void multiplyMatrix(int matrix1[][COLS], int matrix2[][COLS], int matrix3[][COLS]);

int main()
{
    	int matrix1[ROWS][COLS], matrix2[ROWS][COLS], matrix3[ROWS][COLS];

    	printf("Enter elements in first %d x %d matrix:\n", ROWS, COLS);
    	inputMatrix(matrix1);

    	printf("Enter elements in second %d x %d matrix:\n", ROWS, COLS);
    	inputMatrix(matrix2);

    	multiplyMatrix(matrix1, matrix2, matrix3);

    	printf("Elements of the third %d x %d matrix:\n", ROWS, COLS);
    	printMatrix(matrix3);

    	return 0;
}

void inputMatrix(int matrix[][COLS])
{
    	for(int i = 0; i < ROWS; i++)
    	{
        	for(int j = 0; j < COLS; j++)
        	{
            	scanf("%d", (*(matrix + i) + j));
        	}
    	}
}

void printMatrix(int matrix[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
        	{
            	printf("%d ", *(*(matrix + i) + j));
        	}
        	printf("\n");
    	}
}

void multiplyMatrix(int matrix1[][COLS], int matrix2[][COLS], int matrix3[][COLS])
{
	int row, col, i;
	int sum;

	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col < COLS; col++)
		{
			sum = 0;
			for (i = 0; i < COLS; i++)
			{
				sum += (*(*(matrix1 + row) + i)) * (*(*(matrix2 + i) + col));
			}

			*(*(matrix3 + row) + col) = sum;
	        }
	    }
	}
