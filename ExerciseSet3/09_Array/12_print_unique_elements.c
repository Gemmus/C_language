/*
Write a C program to input elements in array and print all unique elements in array.
How to find unique elements in array in C programming.
Logic to find unique elements in array in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, count, frequency[MAX_SIZE];

    printf("Enter the number of the first elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) {
    	scanf("%d", &array[i]);
    	frequency[i] = -1;
    }

    for(int i = 0; i < size; i++)
    {
    	count = 1;
        for(int j= i + 1; j < size; j++)
        {
            if(array[i] == array[j])
            {
            	count++;
            	frequency[j] = 0;
            }
        }

        if(frequency[i] != 0) frequency[i] = count;
    }

    printf("The unique element of the array:\n");
    for(int i = 0; i < size; i++) {
    	if(frequency[i] == 1) printf("%d, ", array[i]);
    }

    return 0;
}
