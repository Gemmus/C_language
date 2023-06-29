/*
Write a C program to input elements in array and put even and odd elements in separate array.
How to separate even and odd array elements in two separate array containing only even or odd elements using C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, evenArray[MAX_SIZE], evenIndex = 0, oddArray[MAX_SIZE], oddIndex = 0;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    for(int i = 0; i < size; i++){
    	if(array[i] % 2 == 0) 
        {
            evenArray[evenIndex] = array[i];
            evenIndex++;
    	}
    	else{
            oddArray[oddIndex] = array[i];
            oddIndex++;
    	}
    }

    printf("The even array:\n");
    for(int i = 0; i < evenIndex; i++) printf("%d, ", evenArray[i]);
    printf("\n");
    printf("The odd array:\n");
    for(int i = 0; i < oddIndex; i++) printf("%d, ", oddArray[i]);

    return 0;
}
