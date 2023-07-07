/*
Write a C program to input elements in an array and sort array using pointers.
How to sort an array in ascending or descending order using function pointers in C programming.
Logic to sort an array using pointers in program.
*/

#include <stdio.h>
#define MAX_SIZE 100

void inputArray(int * arr, int size);
void printArray(int * arr, int size);
int sortAscending(int * num1, int * num2);
int sortDescending(int * num1, int * num2);
void sort(int * arr, int size, int (* compare)(int *, int *));


int main()
{
	int array[MAX_SIZE], size;

	printf("Enter the number of elements:\n");
	scanf("%d", &size);
	printf("Enter each of the elements:\n");
	inputArray(array, size);

	printf("Array in ascending order:\n");
	sort(array, size, sortAscending);
	printArray(array, size);

	printf("\nArray in descending order:\n");
	sort(array, size, sortDescending);
	printArray(array, size);

	return 0;
}

void inputArray(int * arr, int size)
{
	 int * arrEnd = (arr + size - 1);

	 while(arr <= arrEnd) scanf("%d", arr++);
}

void printArray(int * arr, int size)
{
	int * arrEnd = (arr + size - 1);

	while(arr <= arrEnd) printf("%d, ", *(arr++));
}

int sortAscending(int * num1, int * num2)
{
	 return (*num1) - (*num2);
}

int sortDescending(int * num1, int * num2)
{
    return (*num2) - (*num1);
}

void sort(int * arr, int size, int (* compare)(int *, int *))
{
	int * arrEnd  = (arr + size - 1);
	int * curElem = arr;
	int * elemToSort;

	while(curElem <= arrEnd)
	{
		elemToSort = curElem;

		while(elemToSort <= arrEnd)
		{
			if(compare(curElem, elemToSort) > 0)
			{
				*curElem    ^= *elemToSort;
				*elemToSort ^= *curElem;
				*curElem    ^= *elemToSort;
			}
			elemToSort++;
		}
		curElem++;
	}
}

