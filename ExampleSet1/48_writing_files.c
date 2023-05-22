#include <stdio.h>

int main48(){

	//FILE *pF = fopen("test.txt", "w"); //w = write

	//fprintf(pF, "writing into the file");

	FILE *pF = fopen("test.txt", "a"); //a = append

	fprintf(pF, "writing into the file for the second time");

	fclose(pF);

	if(remove("test.txt") == 0){
		printf("Deleted successfully.");
	}
	else{
		printf("Not deleted.");
	}

	return 0;
}
