#include <stdio.h>
#include <stdbool.h>

int main18(void){

	float temp = 1000;
	bool sunny = false;

	if(temp >= 0 && temp <= 30 && sunny){
		printf("\nThe weather is good!");
	}
	else{
		printf("\nThe weather is bad!");
	}

	return 0;

}
