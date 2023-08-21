#include <stdio.h>

int main()
{
    double bus_ticket = 0, taxi_trip = 0, money = 0;
    int selection = 0;

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
            printf("You chose bus.\n");
            if(money >= bus_ticket) {
                money -= bus_ticket;
            }
            else {
                printf("You don't have enough money for bus.\n");
            }
            printf("You have %.2lf euros left.\n", money);
        }

        else if (selection == 2) {
            printf("You chose taxi.\n");
            if(money >= taxi_trip) {
                money -= taxi_trip;
            }
            else {
                printf("You don't have enough money for taxi.\n");
            }
            printf("You have %.2lf euros left.\n", money);
        }

        else {
            printf("Invalid input. Please enter a valid input.\n");
        }
    }

    printf("You need to walk. Bye");

    return 0;
}
