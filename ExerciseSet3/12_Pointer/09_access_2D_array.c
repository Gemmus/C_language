/*
How to access two dimensional array using pointers in C programming?
Write a C program to input and print elements of a two dimensional array using pointers and functions.
*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);

int main()
{
    int matrix[ROWS][COLS];

    printf("Enter elements in %d x %d matrix:\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);

    printf("Elements of %d x %d matrix:\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);

    return 0;
}

void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}
