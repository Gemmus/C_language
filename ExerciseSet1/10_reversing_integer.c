// C program to display the given integer in a reverse manner

#include <stdio.h>

int main10(void){

	int number;

	printf("Enter a number:  ");
	scanf("%d", &number);

	int reverse = 0;

	while(number != 0){
		int digit = number % 10;
	    reverse = (reverse * 10) + digit;
	    number = number / 10;
	  }

	printf("The reverse of the number is %d \n", reverse);

	return 0;
}
