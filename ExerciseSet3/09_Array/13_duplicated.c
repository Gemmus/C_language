/*
Write a C program to input elements in array from user and count duplicate elements in array.
C program to find all duplicate elements in an unsorted array.
How to count duplicate elements in array using loop in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, duplicate = 0;

    printf("Enter the number of the first elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    for(int i = 0; i < size; i++)
        {
            for(int j= i + 1; j < size; j++)
            {
                if(array[i] == array[j])
                {
                    duplicate++;
                    break;
                }
            }
        }

    printf("The total number of duplicate elements in array is: %d.", duplicate);

    return 0;
}
