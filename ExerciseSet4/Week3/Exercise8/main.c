/*
Write a function called print_numbers that takes two parameters pointer to constant integers and number of integers to print.

void print_numbers(const int *array, int count);

The function prints the numbers on separate lines in eight characters wide field.
Write a program that defines an array of 15 integers
 and fills the array with random numbers and then uses the function to print the array contents.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_numbers(const int *array, int count);

int main(void) {

    int highest_value = 1000000;
    int count = 15;
    int array[count];
    int *ptr = array;

    srand(time(0));

    for(int i = 0; i < count; i++) {
        array[i] = (rand() % highest_value) + 1;
    }

    print_numbers(ptr, count);

    return 0;
}

void print_numbers(const int *array, int count) {

    for(int i = 0; i < count; i++) {
        printf("%8d\n", array[i]);
    }

}

