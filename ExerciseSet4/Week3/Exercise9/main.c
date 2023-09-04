/*
Write a function called find_first that takes three parameters: pointer to constant unsigned integers
and an unsigned integer to find and returns an integer.

int find_first(const unsigned int *array, unsigned int what);

The function searches for the given number in the array until it is found or the current number in the
array is zero. If the number is not found until a zero is seen the program returns -1. If the number is
found function returns the index at which the number was found.

Write a program that defines an array of 20 integers and fills the first 19 elements with random
numbers in range 1 - 20 and puts a zero as the last number in the array. The program prints the array
one number per line.

Program then asks user to enter number to search for or zero to stop. If the number is not zero
program calls find_first to see if the number occurs in the array. If the number is found it prints the
index where the number is found or “not found”. If user enters zero the program stops.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 20

void print_numbers(const unsigned int *array, int count);

int find_first(const unsigned int *array, unsigned int what);

int main(void) {

    unsigned int array[MAX_SIZE];
    int i, input = -1, retval = -1;

    srand(time(0));

    for(i = 0; i < MAX_SIZE - 1; i++) {
        array[i] = (rand() % MAX_SIZE) + 1;
    }
    array[i++] = 0;

    print_numbers(array, MAX_SIZE);

    while (input != 0) {

        printf("Enter number to search for or zero to stop: ");
        if (scanf("%d", &input) != 1) {
            while(getchar() != '\n');
            printf("Incorrect input.\n");
        } else if((input < 0) || (input > 20)) {
            printf("Incorrect input.\n");
        } else if(input > 0) {
            retval = find_first(array, input);
            if (retval != - 1) {
                printf("The first index of %d is: %d.\n", input, retval);
            } else {
                printf("Not found.\n");
            }
        }
    }

    printf("You entered 0 and chose to leave. Bye!");

    return 0;
}

void print_numbers(const unsigned int *array, int count) {

    for(int i = 0; i < count; i++) {
        printf("%2d\n", array[i]);
    }

}

int find_first(const unsigned int *array, unsigned int what) {

    int index = 0;

    while((array[index] != what) && (array[index] != 0)) {
        index++;
    }

    if(index == (MAX_SIZE - 1)) {
        return -1;
    } else {
        return index;
    }

}
