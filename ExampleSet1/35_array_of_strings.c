#include <stdio.h>
#include <string.h>

int main35(void){

	char cars[][10] = {"Mustang", "Audi", "Camaro"};

	strcpy(cars[0], "Volvo");

	for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
			printf("%s\n", cars[i]); 				//prints: Volvo, Audi, Camaro
	}

	return 0;
}
