/*
Write a C program to input elements in an array and reverse the array using pointers.
How to reverse an array using pointers in C programming.
Logic to reverse an array using pointers in C.
*/

#include <stdio.h>
#define MAX_SIZE 100

void printArray(int *arr, int size);

int main()
{
	int arr[MAX_SIZE], size;
	int *left = arr;
	int *right;

	printf("Enter size of array:\n");
	scanf("%d", &size);

	right = &arr[size - 1];

	printf("Enter elements in array:\n");
	while(left <= right) scanf("%d", left++);

	printf("\nArray before reverse: ");
	printArray(arr, size);

	left = arr;

	while(left < right)
	{
		*left    ^= *right;
		*right   ^= *left;
		*left    ^= *right;
		left++;
		right--;
	}

	printf("\nArray after reverse: ");
	printArray(arr, size);

	return 0;
}

void printArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd) printf("%d, ", *(arr++));
}
