#include <stdio.h>
#include <stdbool.h>

int main20(void){

	bool sunny = true;

	// (sunny) == (sunny == 1) == (sunny == true)

	if(!sunny){
		printf("\nIt's cloudy outside!");
	}
	else{
		printf("\nIt's sunny outside!");
	}

	return 0;

}
