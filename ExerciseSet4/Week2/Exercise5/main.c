#include <stdio.h>

int read_range(int low, int high);

int main(void)
{
    int computer_num = 0;
    const int minimum = 1, maximum = 6;

    printf("Let's play!\n");

    for (int rounds = 0; rounds < 3; rounds++) {

        printf("Roll a die and enter your result.\n"
               "Enter a number between %d and %d: ", minimum, maximum);
        computer_num = read_range(minimum, maximum);

        if (computer_num != maximum) {
            printf("I got %d. I win!\n", computer_num + 1);
        }
          
        else {
            printf("I got %d. It is a tie!\n", computer_num);
        }

    }

    printf("Better luck next time. Bye!\n");

    return 0;
}

int read_range(int low, int high)
{
    int number = low - 1;
  
    do {
      
        if (scanf("%d", &number) != 1) {
            while(getchar() != '\n');
            printf("Invalid input.\n");
        }
      
        if ((number < low) || (number > high)) {
            printf("Out of range! Try again: ");
        }
      
    } while ((number < low) || (number > high));

    return number;
}
