// C program to check whether the given number is even or odd

#include <stdio.h>

int main(void){

	int number;

	printf("Enter an integer:  ");
	scanf("%d", &number);

	if(number % 2 == 0){
		printf("%d is an even number.\n", number);
	}
	else{
		printf("%d is an odd number.\n", number);
	}

	return 0;
}
