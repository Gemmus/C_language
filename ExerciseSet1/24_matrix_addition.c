// C program to implement matrix addition

#include <stdio.h>

int main24(void){

	int array1[5][5] = {{1, 2, 3, 4, 5},
						{1, 2, 3, 4, 5},
						{1, 2, 3, 4, 5},
						{1, 2, 3, 4, 5},
						{1, 2, 3, 4, 5}};
	int array2[5][5] = {{9, 8, 7, 6, 5},
						{9, 8, 7, 6, 5},
						{9, 8, 7, 6, 5},
						{9, 8, 7, 6, 5},
						{9, 8, 7, 6, 5}};

	int added[5][5];

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			added[i][j] = array1[i][j] + array2[i][j];
		}
	}

	for(int k = 0; k < 5; k++){
		for(int l = 0; l < 5; l++){
			printf("%d ", added[k][l]);
		}
		printf("\n");
	}

	return 0;
}
