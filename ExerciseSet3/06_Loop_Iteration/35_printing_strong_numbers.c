/*
Write a C program to print Strong numbers between 1 to n.
C program to print all strong numbers between a given range.
Logic to print strong numbers in a given range in C program.

Strong number is a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145
*/

#include <stdio.h>

int main()
{
	int input, temp, last, factorial, sum;

	printf("Enter a number:\n");
	scanf("%d", &input);

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

    return 0;
}
