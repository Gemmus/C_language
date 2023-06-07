// Write a program that prompts the user for an integer and checks whether it is even or odd.
// If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".

#include <stdio.h>

int main5_1(void){

	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	if(number % 2 == 0){
		printf("%d is an even number.\n", number);
	}
	else if(number % 2 == 1){
		printf("%d is an odd number.\n", number);
	}
	else{
		printf("Error.\n");
	}

	return 0;
}
