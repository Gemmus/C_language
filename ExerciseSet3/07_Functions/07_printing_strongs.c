/*
Write a C program to print all strong numbers between a given interval in C programming.
How to print strong numbers in a given range using functions in C programming.
Write a C function to find strong numbers between 1 to n.
*/

#include <stdio.h>

void strongPrinter(int number);

int main()
{
    int number;

    printf("Enter a upper limit:\n");
    scanf("%d", &number);

    strongPrinter(number);

    return 0;
}

void strongPrinter(int input){

	int temp, sum, last, factorial;

	for(int number = 1; number <= input; number++){
			temp = number;
			sum = 0;

			while(temp != 0){
				last = temp % 10;
				factorial = 1;
				for(int i = 1; i <= last; i++) factorial *= i;
				sum += factorial;
				temp /= 10;
			}

			if(number == sum) printf("%d, ", number);
		}
}
