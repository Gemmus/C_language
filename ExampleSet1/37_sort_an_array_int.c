#include <stdio.h>
#include <string.h>

void sort37int(int array[], int size){
	for(int i = 0; i < size -1; i++){
		for(int j = 0; j < size - 1; j++){
			if(array[j] > array[j + 1]){
				int temp = array[j];
				array[j] = array [j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void printArray37int(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d, ", array[i]);
	}

}

int main37int(void){

	int array[] = {9, 5, 1, 6, 4, 2, 7, 3, 8};

	int size = sizeof(array)/sizeof(array[0]);

	sort37int(array, size);
	printArray37int(array, size); // 1, 2, 3, 4, 5, 6, 7, 8, 9,

	return 0;
}
