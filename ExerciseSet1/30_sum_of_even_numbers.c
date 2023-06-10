 // C Program to Find the Sum of Even Numbers between 0 - 100

#include <stdio.h>

int main30(void){

	int sum  = 0;

	for(int i = 0; i <= 100; i++){
		if(i % 2 == 0) sum += i;
	}

	printf("The sum of the even numbers between 0 - 100: %d.", sum);

	return 0;
}
