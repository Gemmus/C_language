// C program to display all integers within the range 100-150 whose sum of digits is an even number

#include <stdio.h>

int main14(void){

	for(int i = 100; i <= 150; i++){

		int number = i, digit, sum = 0;

		while(number != 0){
			digit = number % 10;
			sum += digit;
			number /= 10;
		}

		if(sum % 2 == 0)printf("%d\n", i);
	}
	return 0;
}
