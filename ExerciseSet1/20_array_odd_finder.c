// C program to find the number of odd numbers in an array

#include <stdio.h>

int main20(void){

	int count = 0;

	int array[] = {8, 9, 1, 5, 6, 92, 36, 45, 71, 13};
	int size = sizeof(array)/sizeof(array[0]);

	for(int i = 0; i < size; i++){
		if(array[i] % 2 == 1){
			printf("%d ", array[i]);
			count++;
		}
	}

	printf("\nThe array contains %d odd numbers.", count);

	return 0;
}
