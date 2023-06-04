// C program to find the average of 5 numbers using while loop

#include <stdio.h>

int main9(void){

	int count = 0, number;
	double sum = 0;

	while(count < 5){

		printf("Enter a number:  ");
		scanf("%d", &number);
		sum += number;
		count++;
	}

	double average = sum / count;

	printf("The average of the five entered number: %.2lf.", average);

	return 0;
}
