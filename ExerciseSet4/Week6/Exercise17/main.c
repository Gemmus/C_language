/*
Write a password generator function that takes three parameters: character pointer, integer (size of
the array), a const char pointer (a word) and returns a bool. The function generates password and
stores it in the array and returns true. The length of the generated password is the
𝑙𝑒𝑛𝑔𝑡ℎ 𝑜𝑓 𝑤𝑜𝑟𝑑 × 2 + 1 characters. If the password does not fit in the string function returns false
and does not modify the string.

The password must contain the word given as a parameter so that password starts with a random
printable character and every other letter is a letter from the word and every other is a random
printable character. The password ends with a random printable character. Note that printable
characters are not limited to alphanumerical characters.

Write a program that asks user to enter a word to place in the password or to enter “stop” to stop
the program. The size of the string to read the word into must be 32. If user does not enter stop the
program generates a password using the generator function. If a password is generated successfully
the program prints it otherwise an error message is printed. Then the program asks for another
word.

For example:

User enters: metropolia
Program prints: #m%eGtqrHo&p2o+lBimaY
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 100

void binaryToHexadecimal(int number);

int main(void) {

    int input_num = 0;
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
            binaryToHexadecimal(rand () % MAX_VALUE);
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

    printf("Random decimal number: %d\n", number);
    printf("Hexadecimal number: 0x%s\n", reverse);
}
