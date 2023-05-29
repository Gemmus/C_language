// C program to find out the average of a set of integers

#include <stdio.h>

int main(void){

	int count;
	float number, total = 0, average;

	printf("Enter the number of inputs:  ");
	scanf("%d", &count);

	for(int i = 0; i < count; i++){
		printf("Enter the number:  ");
		scanf("%f", &number);
		total += number;
	}

	average = total/count;
	printf("The average of entered numbers is %.2f.", average);

	return 0;
}
