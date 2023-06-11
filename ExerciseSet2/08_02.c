// The following is the initialisation of a 5 x 5 integer array:

/*
int matrix[5][5] = {
    4, 6, 25, 88, 5,
    34, 5, 300, 4, 65,
    78, 43, 11, 90, 125,
    98, 585, 12, 63, 21,
    45, 35, 9, 5, 1
};
 */

// Copy the initialisation into a program that prints the array on the screen and calculates the sum of the elements. Each line shall be followed by a newline character.

#include <stdio.h>

int main8_2(void){

	int total = 0;

	int matrix[5][5] = {
	    4, 6, 25, 88, 5,
	    34, 5, 300, 4, 65,
	    78, 43, 11, 90, 125,
	    98, 585, 12, 63, 21,
	    45, 35, 9, 5, 1
	};

	for(int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++){

		for(int j = 0; j < sizeof(matrix[0])/sizeof(matrix[0][0]); j++){
			printf("%d ", matrix[i][j]);
			total += matrix[i][j];
		}
		printf("\n");
	}

	printf("\nTotal: %d", total);

	return 0;
}
