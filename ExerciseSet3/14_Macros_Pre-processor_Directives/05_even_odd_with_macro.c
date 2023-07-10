/*
Write a C program to check even or odd using macro.
How to check whether a given number is even or odd using macro in C program.
Logic to check even or odd numbers using macro.
*/

#include <stdio.h>
#define ODD(x) (x & 1) // Returns 1 if x is odd, otherwise returns 0.

int main()
{
    int num;

    printf("Enter the value:\n");
    scanf("%d", &num);

    if(ODD(num)) printf("%d is odd.\n", num);
    else printf("%d is even.\n", num);

    return 0;
}
