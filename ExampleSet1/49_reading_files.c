#include <stdio.h>

int main49(void){

	FILE *pF = fopen("C:\\Users\\Gemma\\Desktop\\test.txt", "r");

	char buffer[255];

	if(pF == NULL){
		printf("Unable to open, no file.");
	}
	else{
		while(fgets(buffer, 255, pF) != NULL){
			printf("%s\n", buffer);
		}
	}

	fclose(pF);

	return 0;
}
