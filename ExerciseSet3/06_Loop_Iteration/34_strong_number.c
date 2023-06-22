/*
Write a C program to input number from user and check whether number is Strong number or not.
How to check strong numbers using loop in C programming.
Logic to check strong number in C programming.

Strong number is a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145
*/

#include <stdio.h>

int main()
{
	int number, temp, last, factorial, sum = 0;

	printf("Enter a number:\n");
	scanf("%d", &number);

	temp = number;
	while(temp != 0){
		last = temp % 10;
		factorial = 1;
		for(int i = 1; i <= last; i++) factorial *= i;
		sum += factorial;
		temp /= 10;
	}

	if(number == sum) printf("%d == %d, it's a strong number.", number, sum);
	else printf("%d != %d, it's not a strong number.", number, sum);

  return 0;
}
