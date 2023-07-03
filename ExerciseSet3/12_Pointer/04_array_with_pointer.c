/*
Write a C program to input elements in an array and print array using pointers.
How to input and display array elements using pointer in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int array[MAX_SIZE], size;
	int * ptr = array;

	printf("Enter the number of elements:\n");
	scanf("%d", &size);
	printf("Enter each of the elements:\n");
	for(int i = 0; i < size; i++){
		scanf("%d", ptr);
		ptr++;
	}

	ptr = array;

	printf("Array elements: ");
	for (int i = 0; i < size; i++){
		printf("%d, ", *ptr);
	    ptr++;
	}

    return 0;
}
