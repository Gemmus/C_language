/*
Write a C program to find largest and second largest element in an array.
How to find second largest element in array in C programming language.
Logic to find second largest element in array in C program.
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

    // Assigning both max 1 and max 2 the smallest value of the array.
    int max1 = array[0];

    for(int i = 0; i < size; i++) {
    	if(array[i] < max1) max1 = array[i];
    }

    int max2 = max1;

    // Finding the largest and the second largest:
    for(int i = 0; i < size; i++)
       {
           if(array[i] > max1)
           {
               max2 = max1;
               max1 = array[i];
           }
           else if((array[i] > max2) && (array[i] < max1))
           {
               max2 = array[i];
           }
       }

    printf("The largest of the entered numbers is: %d.\n", max1);
    printf("The second largest of the entered numbers is: %d.\n", max2);

    return 0;
}
