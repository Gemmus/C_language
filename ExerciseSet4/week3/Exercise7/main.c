/*
Write a function named read_positive. The function takes a pointer to int as a parameter and returns a bool.

bool read_positive(int *value);

The function asks (=prints) user to enter a positive number. If user enters a valid number and the
number is positive the function stores the number using the pointer and returns true. If reading
number fails or number is not positive function returns false without making changes to the value
using pointer.

Write a program that “plays” a guessing game with user. The program asks user to guess how much
money it has and after the guess claims to twice as much plus 20 euros. Program must use the
function above to ask user to enter the number. If reading fails, function returns false, program asks
to enter a number again. Program stops when user has entered an incorrect value three times.

Example output:

Guess how much money I have!
Enter a positive number: 50
You didn’t get it right. I have 120 euros.
Guess how much money I have!
Enter a positive number: xd
Incorrect input
Guess how much money I have!
Enter a positive number: 70
You didn’t get it right. I have 160 euros.
Guess how much money I have!
Enter a positive number: fubar
Incorrect input
Guess how much money I have!
Enter a positive number: not
Incorrect input
I give up! See you later!
*/

#include <stdio.h>
#include <stdbool.h>

bool read_positive(int *value);

int main(void) {

    bool retval = false;
    unsigned int counter = 0;
    int number = -1;
    int *value = &number;

    while (counter < 3) {
        printf("Guess how much money I have!\n");

        retval = read_positive(value);

        if (retval == true) {

            printf("You didn't get it right. I have %d euros.\n", *value * 2 + 20);

        } else {
            counter++;
        }
    }

    printf("I give up! See you later!");

    return 0;
}

bool read_positive(int *value) {

    bool positive = false;
    int input = 0;

    printf("Enter a positive number: ");

    if (scanf("%d", &input) != 1) {
        while(getchar() != '\n');
        printf("Incorrect input.\n");
    } else if(input < 0) {
        printf("Incorrect input.\n");
    } else {
        *value = input;
        positive = true;
    }

    return positive;

}
