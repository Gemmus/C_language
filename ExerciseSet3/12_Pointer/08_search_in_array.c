/*
Write a C program to input elements in array and search an element in array using pointers.
How to search an element in array using pointers in C programming.
Logic to search an element in array using pointers in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int arr[MAX_SIZE], size, search, index = -1;
	int * ptr = arr;

	printf("Enter size of array:\n");
	scanf("%d", &size);

	printf("Enter the number of elements:\n");
	for(int i = 0; i < size; i++){
		scanf("%d", ptr);
		ptr++;
	}

	ptr = arr;

	printf("Enter the number to be searched:\n");
	scanf("%d", &search);

	for (int i = 0; i < size; i++){
		if(*ptr == search) {
			index = i;
			break;
		}
    ptr++;
	}

	if(index >= 0) printf("The number is located at index %d.", index);
	else printf("The number cannot be found.");

	return 0;
}
