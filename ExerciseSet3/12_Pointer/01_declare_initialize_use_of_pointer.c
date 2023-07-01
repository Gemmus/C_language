/*
Write a C program to create, initialize and demonstrate the use of pointers.
How to access values and addresses using a pointer variable in C programming.
*/

#include <stdio.h>

int main()
{
	///////////////////////////////////////////////////
	// Get memory address using address of operator: //
	///////////////////////////////////////////////////
	char character = 'G';
	printf("Value of character = %c, Address of character = %u\n", character, &character);

	int integer = 23;
	printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);

	float real = 3.14f;
	printf("Value of real = %f, Address of real = %u\n", real, &real);

	long long biginteger = 989898989ll;
	printf("Value of big integer = %lld, Address of big integer = %u\n", biginteger, &biginteger);

	/////////////////////////////////////////////////
	// Create, initialize and use pointer variable //
	/////////////////////////////////////////////////
	int num = 10;
	int * ptr;

	/* Stores the address of num to pointer type */
	ptr = &num;

	printf("Address of num = %d\n", &num);
	printf("Value of num = %d\n", num);

	printf("Address of ptr = %d\n", &ptr);
	printf("Value of ptr = %d\n", ptr);
	printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}
