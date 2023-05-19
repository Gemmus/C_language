#include <stdio.h>

int main14(void) {
	int age;

	printf("\nEnter your age:  ");
	scanf("%d", &age);

	if(age >= 18){
		printf("You are now signed up.");
	}
	else if(age == 0) {
		printf("You cannot sign up, you were just born.");
	}
	else if(age < 0) {
		printf("You haven't been born yet.");
	}
	else{
		printf("You are to young to sign up.");
	}

	return 0;
}
