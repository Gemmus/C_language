/*
Write a C program to input elements in array and search whether an element exists in array or not.
How to search element in array linearly in C programming.
Logic to search element in array sequentially in C program.
*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], size, number, index = -1;

    printf("Enter the number of the elements:\n");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &array[i]);

    printf("Enter the number to be searched:\n");
    scanf("%d", &number);


    for(int i = index; i < size; i++){
    	if(array[i] == number) index = i;
    }

    if(index >= 0) printf("%d is located at index: %d.", number, index);
    else printf("%d is not in the array.", number);

    return 0;
}
