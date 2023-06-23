/*
Write a recursive function in C to check palindrome number.
How to check whether a number is palindrome or not using recursion in C program.
Logic to check palindrome number using recursion in C programming.
*/

#include <stdio.h>
#include <math.h>

int reverse(int num);
int palindromeChecker(int num1, int num2);

int main()
{
    int number, reversed, palindrome;

    printf("Enter a number:\n");
    scanf("%d", &number);

    reversed = reverse(number);
    palindrome = palindromeChecker(number, reversed);

    if(palindrome == 1) printf("%d is a palindrome.", number);
    else printf("%d is not a palindrome.", number);

    return 0;
}

int reverse(int num){

    int digit = (int) log10(num);

    if(num == 0) return 0;

    return ((num % 10 * pow(10, digit)) + reverse(num/10));

}

int palindromeChecker(int num1, int num2){

	if(num1 == num2) return 1;
	else return 0;

}
