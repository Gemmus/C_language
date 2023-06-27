/*
Write a C program to input elements in an array from user, find maximum and minimum element in array.
C program to find biggest and smallest elements in an array.
Logic to find maximum and minimum element in array in C programming.
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

    int min = array[0], max = array[0];

    for(int i = 0; i < size; i++) {
    	if(array[i] > max) max = array[i];
    	if(array[i] < min) min = array[i];
    }

    printf("The smallest of the entered numbers is: %d.\n", min);
    printf("The largest of the entered numbers is: %d.\n", max);

    return 0;
}
