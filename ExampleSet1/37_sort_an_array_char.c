#include <stdio.h>
#include <string.h>

void sort37char(char array[], int size){
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

void printArray37char(char array[], int size){
	for(int i = 0; i < size; i++){
		printf("%c, ", array[i]);
	}

}

int main37char(void){

	char array[] = {'B', 'F', 'A', 'C', 'E', 'D'};

	int size = sizeof(array)/sizeof(array[0]);

	sort37char(array, size);
	printArray37char(array, size); // A, B, C, D, E, F,

	return 0;
}
