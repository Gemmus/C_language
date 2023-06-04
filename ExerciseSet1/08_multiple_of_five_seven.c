// C program to check whether the given integer is a multiple of both 5 and 7

#include <stdio.h>

int main8(void){

	int number;

	printf("Enter a number:  ");
	scanf("%d", &number);

	if(number % 5 == 0 && number % 7 == 0){
		printf("%d is a multiple of 5 and 7. \n", number);
	}
	else{
		printf("%d is not a multiple of 5 and 7. \n", number);
	}

	return 0;
}
