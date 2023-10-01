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

#define MAX_VALUE 65536

int main(void) {

    int input_num = 0, random_num = 0, shifted_num = 0, masked_num = 0;
    bool quit = false;
    srand(time(0));

    while (false == quit) {
        printf("Enter a number between 0 and 15 or a negative number to quit: ");

        while (scanf("%d", &input_num) != 1) {
            while(getchar() != '\n');
            printf("Invalid input. Enter a number between 0 and 15 or a negative number to quit: ");
        }
        fflush(stdin);

        if (input_num > 15) {
            printf("Input out of range. ");
        } else if (input_num < 0) {
            quit = true;
        } else if (input_num >= 0 && input_num <= 15){
            random_num = rand () % MAX_VALUE;
            printf("Random decimal number: %d\n", random_num);
            printf("Random hexadecimal number: 0x%x\n", random_num);
            shifted_num = random_num >> input_num;
            masked_num = shifted_num & 0x3F; // 0b00111111
            printf("Shifted decimal number: %d\n", shifted_num);
            printf("Masked decimal number: %d\n", masked_num);
            printf("Masked hexadecimal number: 0x%02x\n", masked_num);
        }
    }

    return 0;
}
