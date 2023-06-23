/*
Write a function to print all Armstrong numbers between given interval in C programming.
How to print all Armstrong numbers in given range using functions in C programming.
C function to print all Armstrong numbers from 1 to n.
*/

#include <stdio.h>
#include <math.h>

void armstrongPrinter(int from, int to);
void printer(int num);

int main()
{
    int lower, upper;

    printf("Enter the lower limit:\n");
    scanf("%d", &lower);
    printf("Enter the upper limit:\n");
    scanf("%d", &upper);

    armstrongPrinter(lower, upper);

    return 0;
}

void armstrongPrinter(int from, int to){

	int temp, digits, last, sum;

	for(int number = 1; number <= to; number++){
		temp = number;
		digits = 0;
		sum = 0;

		do{
			digits++;
			temp /= 10;
		}while(temp != 0);

		temp = number;

		while(temp != 0){
			last = temp % 10;
			sum += pow(last, digits);
			temp /= 10;
		}

		if(number == sum) printer(number);
		}

}

void printer(int num){
	printf("%d, ", num);
}
