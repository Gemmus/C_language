// C program to find the product of a set of real numbers

#include <stdio.h>

int main5(void){

	int count;
	int multiplier = 1;
	int number;

	printf("How many integer numbers will be entered?  ");
	scanf("%d", &count);

	for(int i = 0; i < count; i++){
		printf("Enter a number:  ");
		int retval = scanf("%d", &number);
		if(retval == 1){
			multiplier *= number;
		}
	}

	printf("The product of entered number is: %d.", multiplier);

	return 0;
}
