// C program to find out the average of a set of integers

#include <stdio.h>

int main(void){

	int integers[10];
	int input;
	int size = 0;
	float total;
	float average;

	do{
		printf("Enter an integer or 0 to quit:  ");
		int retval = scanf("%d", &input);
		if(retval == 1 && input != 0){
			integers[size] = input;
			size++;
		}
	}while(size < 10 && input != 0);

	for(int i = 0; i < size; i++){
		//printf("%d ", integers[i]);
		total += integers[i];
	}

	average = total/size;
	printf("The average of entered numbers is %.2f.", average);

	return 0;
}
