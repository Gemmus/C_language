/*
Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.
How to check prime or armstrong or perfect number in C programming using functions.
*/

#include <stdio.h>
#include <math.h>

int primeChecker(int num);
int armstrongChecker(int num);
int perfectChecker(int num);

int main()
{
    int num, prime, armstrong, perfect;

    printf("Enter a number:\n");
    scanf("%d", &num);

    prime = primeChecker(num);
    armstrong = armstrongChecker(num);
    perfect = perfectChecker(num);

    if(prime == 1) printf("%d is a prime number.\n", num);
    else printf("%d is not a prime number.\n", num);

    if(armstrong == 1) printf("%d is an armstrong number.\n", num);
    else printf("%d is not an armstrong number.\n", num);

    if(perfect == 1) printf("%d is a perfect number.\n", num);
    else printf("%d is not a perfect number.\n", num);

    return 0;
}

int primeChecker(int num){
	int prime = 1;

	for(int i = 2; i < (num / 2); i++)
	    {
	    	if(num % i == 0){
	    		prime = 0;
	    		break;
	    	}
	    }

	return prime;
}

int armstrongChecker(int num){
	int armstrong = 0, temp, digits = 0, last, sum = 0;

	temp = num;

	do{
		digits++;
		temp /= 10;
	}while(temp != 0);

	temp = num;

	while(temp != 0){
		last = temp % 10;
		sum += pow(last, digits);
		temp /= 10;
	}

	if(num == sum) armstrong = 1;

	return armstrong;
}
int perfectChecker(int num){
	int perfect = 0, sum = 0;

	for(int i = 1; i < num; i++){
		if(num % i == 0) sum += i;
	}

	if(num == sum) perfect = 1;

	return perfect;
}
