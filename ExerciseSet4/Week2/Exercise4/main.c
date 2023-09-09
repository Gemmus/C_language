/*
Write a function called read_integer that takes no parameters and returns an integer. The function
reads a single integer. If the reading fails the function prints “invalid input” and tries to read an
integer again. When an integer is successfully read the function returns the integer.
The declaration of the function is:

int read_integer(void);

Write a program that asks user to enter positive integers or a negative number to stop. The program
must use read_integer-function to read the number. The program calculates and prints the average
of the entered numbers excluding the negative number. For example, if user enters: 1 3 4 2
7 -1, the program prints 3.4 as the average.
The program must print the average with three decimal precision.

Enter positive numbers or negative to stop: 1
Enter positive numbers or negative to stop: 3
Enter positive numbers or negative to stop: 4
Enter positive numbers or negative to stop: 2
Enter positive numbers or negative to stop: 7
Enter positive numbers or negative to stop: -1
You entered 5 positive numbers. The average is: 3.400
*/

#include <stdio.h>
#include <stdint.h>

int read_integer(void);

int main(void)
{
    int number = 0;
    int64_t total = 0;
    unsigned int count = 0;
    double average = 0.0;

    do {

        printf("Enter positive numbers or negative to stop: ");
        number = read_integer();

        if(number > 0) {
            total += number;
            count++;
        }

    } while (number >= 0);

    if (count > 0) {
        average = (double) total /count;
        printf("You entered %d positive numbers. The average is: %.3lf\n", count, average);
    }
    else {
        printf("No positive numbers were entered, thus average cannot be calculated. Bye!\n");
    }
    
    return 0;
}

int read_integer(void)
{
    int number = 0;

    do{
        if (scanf("%d", &number) != 1) {
            while(getchar() != '\n');
            printf("Invalid input.\n");
        }
    }while(number == 0);

    return number;
}
