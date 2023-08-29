#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll_printer(int highest_value, int random_num);
void roll_dice(int highest_value);

int main(void)
{
    unsigned int selection = 0;
    const int smaller_dice = 6, bigger_dice = 10;

    printf("Select from the following operations:\n"
           "Roll D%d --> Enter: 1\n"
            "Roll D%d --> Enter: 2\n"
           "Quit --> Enter: 3\n", smaller_dice, bigger_dice);

    do {

        printf("Enter your selection: ");

        if (scanf("%d", &selection) != 1) {
            while(getchar() != '\n');
            printf("Invalid input. ");
        }

        else if ((selection <= 0) || (selection > 3)) {
            printf("Out of range! ");
        }

    } while ((selection <= 0) || (selection > 3));

    switch(selection) {
        case 1:
            roll_dice(smaller_dice);
            break;
        case 2:
            roll_dice(bigger_dice);
            break;
        case 3:
            printf("You selected quit. Bye!\n");
            break;
    }

    return 0;
}

void roll_printer(int highest_value, int random_num)
{
    printf("Rolling dice D%d...\n"
           "...\n"
           "You rolled: %d.\n", highest_value, random_num);
}

void roll_dice(int highest_value)
{
    srand(time(0));
    roll_printer(highest_value, (rand() % highest_value) + 1);
}
