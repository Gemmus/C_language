#include <stdio.h>

int main29(void){

	int number = 0;
	int sum = 0;


	do{
		printf("\nEnter a number above 0:  ");
		scanf("%d", &number);
		if (number > 0){
			sum += number;
		}
	}while(number > 0);

	printf("\n%d", sum);

	return 0;
}
