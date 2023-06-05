// C program to find the geometric mean of n numbers

#include <stdio.h>
#include <math.h>

int main11(void){

	int count;
	double number, product = 1, average, one = 1;

	printf("Enter the number of the numbers:  ");
	scanf("%d", &count);

	for(int i = 0; i < count; i++){
		printf("Enter a number:  ");
		scanf("%lf", &number);
		product *= number;
	}

	average = pow(product, one/count);

	printf("The geometric mean of entered numbers is: %.2lf.", average);

	return 0;
}
