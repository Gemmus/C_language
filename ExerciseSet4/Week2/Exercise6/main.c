#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll_printer(int highest_value, int random_num);
void roll_D6();
void roll_D10();

int main(void)
{
    unsigned int selection = 0;

    printf("Select from the following operations:\n"
           "Roll D6 --> Enter: 1\n"
           "Roll D10 --> Enter: 2\n"
           "Quit --> Enter: 3\n");

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
            roll_D6();
            break;
        case 2:
            roll_D10();
            break;
        case 3:
            printf("You selected to quit. Bye!\n");
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

void roll_D6()
{
    int highest_value = 6;
    srand(time(0));
    roll_printer(highest_value, (rand() % highest_value) + 1);

}

void roll_D10()
{
    int highest_value = 10;
    srand(time(0));
    roll_printer(highest_value, (rand() % highest_value) + 1);
}
