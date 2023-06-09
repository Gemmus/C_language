// C program to check leap year

#include <stdio.h>

int main26(void){

	int year;

	printf("Enter a year:  ");
	scanf("%d", &year);

	if(year % 4 == 0){
		if(year % 100 != 0){
			printf("%d is a leap year.", year);
		}
		else{
			if(year % 400 == 0){
				printf("%d is a leap year.", year);
			}
			else {
				printf("%d is not a leap year.", year);
			}
		}
	}
	else {
		printf("%d is not a leap year.", year);
	}

	return 0;
}
