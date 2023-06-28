/*
Write a C program to insert element in array at specified position.
C program to insert element in array at given position.
The program should also print an error message if the insert position is invalid.
Logic to insert an element in array at given position in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, index, insert;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    printf("Enter the index of insertion:\n");
    scanf("%d", &index);

    while(index < 0 || index > size)
    {
        printf("Invalid input. Enter a valid index of insertion:\n");
        scanf("%d", &index);
    }

    printf("Enter the element to be inserted:\n");
    scanf("%d", &insert);

    for(int i = size + 1; i >= index; i--){
    	array[i] = array[i - 1];
    }

    array[index] = insert;

    printf("The new, inserted array:\n");
    for(int i = 0; i < size + 1; i++) printf("%d, ", array[i]);

    return 0;
}
