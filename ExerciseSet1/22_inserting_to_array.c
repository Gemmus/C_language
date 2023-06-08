// C program to insert a number to any position in an array

#include <stdio.h>

int main22(void){

	int index;
	double number;

	double array[8] = {9.45, 25.0, 36, 18.2, 67, 46.8};

	int size = sizeof(array)/sizeof(array[0]);

	printf("{");
	for(int i = 0; i < (size - 2); i++) {
		if (i != (size - 3)){
		printf("%.2lf, ", array[i]);
		}
		else{
			printf("%.2lf", array[i]);
		}
	}
	printf("}\n");

	printf("Enter the index:  ");
	scanf("%d", &index);

	printf("Enter the number to be inserted:  ");
	scanf("%lf", &number);

	for(int j = (size - 2); j >= index; j--){
		array[j + 1] = array[j];
	}

	array[index] = number;

	printf("{");
	for(int k = 0; k < (size - 1); k++){
		if (k != (size - 2)){
		printf("%.2lf, ", array[k]);
		}
		else{
			printf("%.2lf", array[k]);
		}
	}
	printf("}\n");

	return 0;
}
