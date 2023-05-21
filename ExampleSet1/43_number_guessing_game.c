#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main43(void){

	srand(time(0));

	int answer = rand() % 51;
	int guess;

	printf("Please enter a number between 0 and 50:  ");
	scanf("%d", &guess);

	do{
		if(0 < guess < 50){
			if(guess < answer){
				printf("The answer is bigger than you guess.\n");
			}
			else{
				printf("The answer is smaller than you guess.\n");
			}
			printf("Please enter a number:  ");
			scanf("%d", &guess);
		}
		else{
			printf("Invalid input.\n");
			printf("Please enter a valid number:  ");
			scanf("%d", &guess);
		}
	}while(guess != answer);

	printf("You guessed the right answer.");

	return 0;
}
