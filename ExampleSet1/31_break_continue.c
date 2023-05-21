#include <stdio.h>

int main31(void){

	for(int i = 1; i <= 20; i++){
		if(i == 13){
			continue; // skips the activity and i++
			//break;
		}
		printf("%d\n", i);
	}
	return 0;
}
