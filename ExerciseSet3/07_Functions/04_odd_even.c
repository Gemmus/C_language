/*
Write a C program to input a number from user and check whether given number is even or odd using functions.
How to check even or odd using functions in C programming. Write a function in C programming to check even or odd.
*/

#include <stdio.h>

int oddChecker(int num);

int main()
{
    int num, odd;

    printf("Enter a number:\n");
    scanf("%d", &num);

    odd = oddChecker(num);

    if(odd == 1) printf("%d is an odd number.\n", num);
    else printf("%d is the even number.", num);

    return 0;
}

int oddChecker(int num) {
	int odd;
	if(num % 2 == 0) odd = 0;
	else odd = 1;
	return odd;
}
