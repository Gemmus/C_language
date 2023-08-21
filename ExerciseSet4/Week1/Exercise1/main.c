#include <stdio.h>

int main()
{
    double bus_ticket, taxi_trip, money;
    int selection;

    printf("Enter price of bus ticket: ");
    scanf("%lf", &bus_ticket);

    printf("Enter price of taxi: ");
    scanf("%lf", &taxi_trip);

    printf("How much money you have: ");
    scanf("%lf", &money);

    printf("You have %.2lf euros left.\n", money);

    while((money >= bus_ticket) || (money >= taxi_trip)) {
        printf("Do you want to take\n");
        printf(" 1) bus (%.2lf euros)\n", bus_ticket);
        printf(" 2) taxi (%.2lf euros)\n", taxi_trip);
        printf("Enter your selection: ");
        scanf("%d", &selection);

        if(selection == 1) {
            if(money >= bus_ticket) {
                money -= bus_ticket;
                printf("You chose bus.\n"
                       "You have %.2lf euros left.\n", money);
            }
            else {
                printf("You chose bus.\n"
                       "You don't have enough money for bus.\n"
                       "You have %.2lf euros left.\n", money);
            }
        }

        else if (selection == 2) {
            if(money >= taxi_trip) {
                money -= taxi_trip;
                printf("You chose taxi.\n"
                       "You have %.2lf euros left.\n", money);
            }
            else {
                printf("You chose taxi.\n"
                       "You don't have enough money for taxi.\n"
                       "You have %.2lf euros left.\n", money);
            }
        }

        else {
            printf("Invalid input. Please enter a valid input.\n");
        }
    }

    printf("You need to walk. Bye");

    return 0;
}
