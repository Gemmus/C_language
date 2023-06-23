/*
Write a function to print all perfect numbers in a given interval in C programming.
How to print all perfect numbers in a given range using functions in C program.
C program to print all perfect numbers between 1 to n using functions.
*/

#include <stdio.h>

void perfectPrinter(int to);
void printer(int num);

int main()
{
    int upper;

    printf("Enter the upper limit:\n");
    scanf("%d", &upper);

    perfectPrinter(upper);

    return 0;
}

void perfectPrinter(int number){

	int sum;

	for(int i = 2; i <= number; i++){
		sum = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0) sum += j;
		}

		if(i == sum) printer(i);
	}
}

void printer(int num){
	printf("%d, ", num);
}
