// Write a program that takes three integers as input and prints the smallest and largest of these numbers.
// The main program must prompt for integers and read them. Write the functions largest() and smallest() that receive the entered numbers as their parameters.
// Correspondingly, the functions shall return values corresponding to their names.

#include <stdio.h>

#ifndef max
	#define max(a,b) ((a) > (b) ? (a) : (b))
#endif

#ifndef min
	#define min(a,b) ((a) < (b) ? (a) : (b))
#endif

int Largest(int num1, int num2, int num3){
	int largest;
	if(num1 == max(num1, num2)){
		if(num1 == max(num1, num3)){
			largest = num1;
		}
		else{
			largest = num3;
		}
	}
	else{
		if(num2 == max(num2, num3)){
			largest = num2;
		}
		else{
			largest = num3;
		}
	}
	return largest;
}
int Smallest(int num1, int num2, int num3){
	int smallest;

	if(num1 == min(num1, num2)){
		if(num1 == min(num1, num3)){
			smallest = num1;
		}
		else{
			smallest = num2;
		}
	}
	else{
		if(num2 == min(num2, num3)){
			smallest = num2;
		}
		else{
			smallest = num3;
		}
	}
	return smallest;
}

int main7_3(void){

	int num1, num2, num3;

	printf("Enter first number:  ");
	scanf("%d", &num1);
	printf("Enter second number:  ");
	scanf("%d", &num2);
	printf("Enter third number:  ");
	scanf("%d", &num3);

	int smallest = Smallest(num1, num2, num3);
	int largest = Largest(num1, num2, num3);

	printf("\nThe smallest number is %d.", smallest);
	printf("\nThe largest number is %d.", largest);

	return 0;
}
