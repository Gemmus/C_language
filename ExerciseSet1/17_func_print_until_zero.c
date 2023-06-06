// C program to print the numbers from a given number n till 0 using recursion

#include <stdio.h>

void printUntilZero(int n){
	  if(n < 0) return;
	  printf("%d ",n);
	  n--;
	  printUntilZero(n--);
}

int main17(void){

	int n;

	printf("Enter a number:  ");
	scanf("%d", &n);

	printUntilZero(n);

	return 0;
}
