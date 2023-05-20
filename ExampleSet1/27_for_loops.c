#include <stdio.h>

int main(void){

	for(int i = 0; i <= 10; i++){
		printf("%d\n", i);
	}

	printf("\n");

	for(int i = 0; i <= 10; i+=2){
		printf("%d\n", i);
	}
	return 0;
}
