/*
Write a C program to copy one array elements to another array using pointers.
How to copy array elements from one array to another array using pointers.
Logic to copy one array to another array using pointers in C programming.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int array1[MAX_SIZE], size, array2[MAX_SIZE];
	int * ptr1 = array1, * ptr2 = array2;

	printf("Enter the number of elements:\n");
	scanf("%d", &size);
	printf("Enter each of the elements:\n");
	for(int i = 0; i < size; i++){
		scanf("%d", ptr1 + i);
	}

	ptr1 = array1;

	for (int i = 0; i < size; i++){
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}

	ptr2 = array2;

	printf("Elements of the copied array: ");
	for (int i = 0; i < size; i++){
		printf("%d, ", *ptr2);
		ptr2++;
	}

 	return 0;
}
