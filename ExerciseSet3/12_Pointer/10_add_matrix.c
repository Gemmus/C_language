/*
Write a C program to add two matrix using pointers.
C program to input two matrix from user and find sum of both matrices using pointers.
*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS]);
void printMatrix(int matrix[][COLS]);
void addMatrix(int matrix1[][COLS], int matrix2[][COLS], int matrix3[][COLS]);

int main()
{
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], matrix3[ROWS][COLS];

    printf("Enter elements in first %d x %d matrix:\n", ROWS, COLS);
    inputMatrix(matrix1);

    printf("Enter elements in second %d x %d matrix:\n", ROWS, COLS);
    inputMatrix(matrix2);

    addMatrix(matrix1, matrix2, matrix3);

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

void addMatrix(int matrix1[][COLS], int matrix2[][COLS], int matrix3[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            *(*(matrix3+ i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }
}
