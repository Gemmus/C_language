/*
Write a C program to print Fibonacci series up to n terms using loop.
How to generate Fibonacci series up to n terms using loops in C programming.
Logic to print Fibonacci series in a given range in C programming.

Fibonacci series is a series of numbers where the current number is the sum of previous two terms.
For Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, … , (n-1th + n-2th)
*/

#include <stdio.h>

int main()
{
	int count, n1 = 0, n2 = 1, n3;

	printf("Enter a 'n' value:  ");
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
/*
Write a C program to print Fibonacci series up to n terms using loop.
How to generate Fibonacci series up to n terms using loops in C programming.
Logic to print Fibonacci series in a given range in C programming.

Fibonacci series is a series of numbers where the current number is the sum of previous two terms.
For Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, … , (n-1th + n-2th)
*/

#include <stdio.h>

int main()
{
	int count, n1 = 0, n2 = 1, n3;

	printf("Enter a 'n' value:  ");
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
