#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_validator(int low, int high);
int roll_dice(int highest_value);
void roll_printer(int highest_value, int random_num);

int main(void)
{
    int selection = 0, dice_number = 0;
    const int smaller_dice = 6, bigger_dice = 10, low = 0, high = 3;

    printf("Select from the following operations:\n"
           "Roll D%d --> Enter: 1\n"
           "Roll D%d --> Enter: 2\n"
           "Quit --> Enter: 3\n", smaller_dice, bigger_dice);

    selection = input_validator(low, high);

    switch(selection) {
        case 1:
            dice_number = roll_dice(smaller_dice);
            roll_printer(smaller_dice, dice_number);
            break;
        case 2:
            dice_number = roll_dice(bigger_dice);
            roll_printer(bigger_dice, dice_number);
            break;
        case 3:
            printf("You selected quit. Bye!\n");
            break;
    }

    return 0;
}

int input_validator(int low, int high)
{
    int selection = 0;

    do {

        printf("Enter your selection: ");

        if (scanf("%d", &selection) != 1) {
            while(getchar() != '\n');
            printf("Invalid input. ");
        }

        else if ((selection <= low) || (selection > high)) {
            printf("Out of range! ");
        }

    } while ((selection <= low) || (selection > high));

    return selection;
}

int roll_dice(int highest_value)
{
    srand(time(0));
    return (rand() % highest_value) + 1;
}

void roll_printer(int highest_value, int random_num)
{
    printf("Rolling dice D%d...\n"
           "...\n"
           "You rolled: %d.\n", highest_value, random_num);
}
