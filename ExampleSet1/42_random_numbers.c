#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main42(void){

	srand(time(0));

	//rand(): gives a random number between 0 - 32,767

	int number1 = (rand() % 6) + 1; // % 6: gives a random number: 0 - 5; --> + 1 : 1 - 6;
	int number2 = (rand() % 6) + 1;
	int number3 = (rand() % 6) + 1;

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);


	return 0;
}
