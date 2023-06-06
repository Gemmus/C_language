// C program to check whether the given integer is a prime number or not

#include <stdio.h>

int main15(void){

	int number;
	int prime = 1;

	printf("Enter an integer:  ");
	scanf("%d", &number);

	for(int i = 2; i < (number / 2); i++){
		if(number % i == 0){
			prime = 0;
			break;
		}
	}

	if(prime == 1){
		printf("%d is a prime number.", number);
	}
	else{
		printf("%d is not a prime number.", number);
	}

	return 0;
}
