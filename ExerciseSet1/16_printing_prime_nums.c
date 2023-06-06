// C program to generate the prime numbers from 1 to N

#include <stdio.h>

int main16(void){

	int end;

	printf("Enter the N:  ");
	scanf("%d", &end);

	for(int i = 2; i <= end; i++){

		int prime = 1;

		for(int j = 2; j <= (i / 2); j++){
			if(i % j == 0){
				prime = 0;
				break;
			}
		}
		if(prime == 1)printf("%d\n", i);
	}

	return 0;
}
