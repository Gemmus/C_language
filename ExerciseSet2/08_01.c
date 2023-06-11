// Write a program that calculates the number of hours worked within a specific period and prints the total number of hours,
// the average length of a day and an itemisation of the hours entered.

// First, the program must ask how many days of working hours shall be entered (max 30 days).
// After this, the program asks for the daily working hours. The program output shall have one decimal place of precision.

#include <stdio.h>

int main8_1(void){

	int days;
	float hours;
	float total = 0.00;
	float working_hours[30];
	int counter = 0;

	do{
		printf("Enter the days of working hours:  ");
		scanf("%d", &days);
	}while(days < 0 || days > 30);

	do{
		printf("Enter the worked hours for day %d:  ", counter + 1);
		scanf("%f", &hours);
		if(hours > 0 && hours <= 24){
			working_hours[counter] = hours;
			total += hours;
			counter++;
		}
		else{
			printf("Invalid input.");
		}
	}while(counter < days);

	printf("\nThe total hours worked within %d days: %.1f hours.\n", days, total);
	printf("The average work hour per day:  %.1f hours.\n", total / days);

	for(int j = 0; j < days; j++){
		printf("Day %d: %.1f hours\n", j +1 , working_hours[j]);
	}

	return 0;
}
