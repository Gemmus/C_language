/*
Write a function in C programming to find prime numbers using function.
How to find all prime numbers between two intervals using functions.
Display all prime numbers between a given range using function in C programming.
*/

#include <stdio.h>
#include <math.h>

void primePrinter(int from, int to);

int main()
{
    int lower, upper;

    printf("Enter a lower limit:\n");
    scanf("%d", &lower);
    printf("Enter a upper limit:\n");
    scanf("%d", &upper);

    primePrinter(lower, upper);

    return 0;
}

void primePrinter(int from, int to){

	for(int num = from; num <= to; num++){

		int prime = 1;

		for(int i = 2; i < (num / 2); i++)
		    {
		    	if(num % i == 0){
		    		prime = 0;
		    		break;
		    	}
		    }
    	if(prime == 1) printf("%d, ", num);
	}
}
