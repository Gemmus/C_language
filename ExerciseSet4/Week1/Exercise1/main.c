/*
Write a program that:
1. Asks user to enter the price of a bus ticket
2. Asks user to enter the price of a taxi trip
3. Asks user to enter how much money he/she has
4. If user has not enough money for either type tells user to walk and then the program stops
5. Asks user to choose taxi or bus (use numbers for selection)
6. Checks if user has enough money for the selected trip type

o If User has enough money reduce the money by the selected trip’s price and print
how much money is left, and go back to step 4
o If user has not enough money for the selected trip type then tell that to user and go
back to step 4
    
For example:
Enter price of bus ticket: 3.50
Enter price of taxi: 25.70
How much money you have: 30
You have 30.00 euros left.
Do you want to take
1) bus (3.50 euros)
2) taxi (25.70 euros)
Enter your selection: 2
You chose taxi.
You have 4.30 euros left.
Do you want to take
1) bus (3.50 euros)
2) taxi (25.70 euros)
Enter your selection: 2
You chose taxi.
You don’t have enough money for taxi.
You have 4.30 euros left.
Do you want to take
1) bus (3.50 euros)
2) taxi (25.70 euros)
Enter your selection: 1
You chose bus.
You have 0.80 euros left.
You need to walk. Bye#include <stdio.h>
*/

int main(void)
{
    double bus_ticket = 0, taxi_trip = 0, money = 0;
    int selection = 0;

    printf("Enter price of bus ticket: ");
    scanf("%lf", &bus_ticket);

    printf("Enter price of taxi: ");
    scanf("%lf", &taxi_trip);

    printf("How much money you have: ");
    scanf("%lf", &money);

    while((money >= bus_ticket) || (money >= taxi_trip)) {
        printf("You have %.2lf euros left.\n", money);
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
        }

        else if (selection == 2) {
            printf("You chose taxi.\n");
            if(money >= taxi_trip) {
                money -= taxi_trip;
            }
            else {
                printf("You don't have enough money for taxi.\n");
            }
        }

        else {
            printf("Invalid input. Please enter a valid input.\n");
        }
    }

    printf("You have %.2lf euros left.\n", money);
    printf("You need to walk. Bye");

    return 0;
}
