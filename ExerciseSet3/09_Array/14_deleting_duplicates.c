/*
Write a C program to delete duplicate elements from array.
How to remove duplicate elements from array in C programming.
After performing delete operation the array should only contain unique integer value.
Logic to delete duplicate elements from array.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    for(int i = 0; i < size; i++)
    {
    	for(int j = i + 1; j < size; j++)
        {
    		if(array[i] == array[j])
            {
    			for(int k = j; k < size - 1; k++)
                {
    				array[k] = array[k + 1];
                }
                size--;
                j--;
            }
        }
    }

    printf("Array elements after deleting duplicates:\n");
    for(int i = 0; i < size; i++) printf("%d; ", array[i]);

    return 0;
}
