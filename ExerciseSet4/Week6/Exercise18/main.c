/*
Write a program that asks user to enter a number in the range from 0 to 15 or a negative number to
stop. If user enters a number between 0 and 15 the program generates a random number and prints
it in hexadecimal. Then program shifts the number to the right by the amount user entered and uses
bitwise and to clear all other bits except bits 0-5 and prints the result in hexadecimal with two digits
and leading zeros.
  
Note: bit numbering starts from 0
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 100

void binaryToHexadecimal(int number);

int main(void) {

    int input_num = 0, random_num = 0, shifted_num = 0;
    bool quit = false;
    srand(time(0));

    while (false == quit) {
        printf("Enter a number between 0 and 15 or a negative number to quit: ");

        while (scanf("%d", &input_num) != 1) {
            while(getchar() != '\n');
            printf("Invalid input. Enter a number between 0 and 15 or a negative number to quit: ");
        }

        if (input_num > 15) {
            printf("Input out of range. ");
        } else if (input_num < 0) {
            quit = true;
        } else if (input_num >= 0 && input_num <= 15){
            random_num = rand () % MAX_VALUE;
            printf("Random decimal number: %d\n", random_num);
            binaryToHexadecimal(random_num);
            shifted_num = random_num >> input_num;
            // cleaning?
            printf("Shifted decimal number: %d\n", shifted_num);
            binaryToHexadecimal(shifted_num);
        }
    }

    return 0;
}

void binaryToHexadecimal(int number)
{
    char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    long long tempDecimal;
    char hex[65], reverse[65];
    int index = 0, remainder, hexIndex, revIndex;

    tempDecimal = number;

    while(tempDecimal != 0)
    {
        remainder = tempDecimal % 16;
        hex[index] = HEXVALUE[remainder];

        tempDecimal /= 16;
        index++;
    }

    hex[index] = '\0';

    revIndex = 0;
    hexIndex = index - 1;
    while(hexIndex >= 0)
    {
        reverse[revIndex] = hex[hexIndex];
        hexIndex--;
        revIndex++;
    }
    reverse[revIndex] = '\0';

    printf("Hexadecimal number: 0x%s\n", reverse);
}
