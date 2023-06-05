// C program to display all the multiples of 3 within the range 10 to 50

#include <stdio.h>

int main13(void){

	for(int i = 10; i < 50; i++){
		if(i % 3 == 0){
			printf("%d ", i);
		}
	}

	return 0;
}
