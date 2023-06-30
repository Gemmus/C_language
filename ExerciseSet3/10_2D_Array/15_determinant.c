/*
Write a C program to read elements in a matrix and find determinant of the given matrix.
C program to find determinant of a 2x2 matrix and 3x3 matrix.
Logic to find determinant of a matrix in C programming.

Determinant of 2x2 matrix: |A| = ad-bc;
Determinant of 3x3 matrix: |A| = a(ei-fh)-b(di-fg)+c(dh-eg);
*/

#include <stdio.h>
#define SIZE2 2
#define SIZE3 3

int main()
{
    int array2[SIZE2][SIZE2], determinant2, array3[SIZE3][SIZE3], determinant3, row, column, a, b, c, d, e, f, g, h, i;

    // Matrix 2x2:
    printf("Enter elements in matrix(size: 2 x 2):\n");
    for(row = 0; row < SIZE2; row++)
    {
        for(column = 0; column < SIZE2; column++)
        {
            scanf("%d", &array2[row][column]);
        }
    }

    a = array2[0][0];
    b = array2[0][1];
    c = array2[1][0];
    d = array2[1][1];

    determinant2 = a * d - b * c;
    printf("The determinant of the 2 x 2 matrix is: %d.\n", determinant2);

    // Matrix 3x3:
    printf("Enter elements in matrix(size: 3 x 3):\n");
    for(row = 0; row < SIZE3; row++)
    {
        for(column = 0; column < SIZE3; column++)
        {
            scanf("%d", &array3[row][column]);
        }
    }

    a = array3[0][0];
    b = array3[0][1];
    c = array3[0][2];
    d = array3[1][0];
    e = array3[1][1];
    f = array3[1][2];
    g = array3[2][0];
    h = array3[2][1];
    i = array3[2][2];

    determinant3 = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    printf("The determinant of the 3x3 matrix is: %d.", determinant3);

    return 0;
}
