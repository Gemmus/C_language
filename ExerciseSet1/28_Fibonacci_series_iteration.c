// C program to print the Fibonacci series using iteration

#include <stdio.h>


int main28(void){

	int count, n1 = 0, n2 = 1, n3;

	printf("Enter a N value:  ");
	scanf("%d", &count);

	printf("The first %d values of the Fibonacci series are: ", count);

	for(int i = 0; i <= count; i++){
		if(i == 0) printf("%d ", n1);
		else if(i == 1) printf("%d ", n2);
		else{
			n3 = n1 + n2;
			printf("%d ", n3);
			n1 = n2;
			n2 = n3;
		}
	}
	return 0;
}
