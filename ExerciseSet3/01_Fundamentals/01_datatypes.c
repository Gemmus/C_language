/*
Write a C program to demonstrate input and output of all basic and derived types.
How to use scanf() and printf() function perform input and output on primitive types in C programming.
*/

#include <stdio.h>

int main(){

	////////////////
	// Characters //
	////////////////

	char charVal;
	printf("Enter a character: ");
	charVal = getchar();
	getchar();
    	printf("You entered character: '%c'.\n", charVal);

	unsigned char uCharVal;
    	printf("\nEnter another character: ");
    	uCharVal = getchar();
    	getchar();
    	printf("You entered unsigned character: '%c'.\n", uCharVal);

	/////////////
	// Numbers //
	/////////////

	short shortVal;
   	printf("\nEnter a signed short value: ");
    	scanf("%hi", &shortVal);
    	printf("You entered signed short: %hi.\n", shortVal);

	unsigned short uShortVal;
   	printf("\nEnter an unsigned short value: ");
    	scanf("%hu", &uShortVal);
    	printf("You entered unsigned short: %hu.\n", uShortVal);

	int intVal;
	printf("\nEnter an signed integer value: ");
    	scanf("%d", &intVal);
    	printf("You entered signed int: %d.\n", intVal);

	unsigned int uIntVal;
    	printf("\nEnter an unsigned integer value: ");
    	scanf("%lu", &uIntVal);
    	printf("You entered unsigned int: %lu.\n", uIntVal);

	long longVal;
    	printf("\nEnter a signed long value: ");
    	scanf("%ld", &longVal);
    	printf("You entered signed long: %ld.\n", longVal);

	unsigned long uLongVal;
    	printf("\nEnter an unsigned long value: ");
    	scanf("%lu", &uLongVal);
    	printf("You entered unsigned long: %lu.\n", uLongVal);

	long long longLongVal;
    	printf("\nEnter a signed long long value: ");
    	scanf("%lld", &longLongVal);
    	printf("You entered signed long long: %lld.\n", longLongVal);

	unsigned long long uLongLongVal;
    	printf("\nEnter an unsigned long long value: ");
   	scanf("%llu", &uLongLongVal);
    	printf("You entered unsigned long long: %llu.\n", uLongLongVal);

	float floatVal;
    	printf("\nEnter a float value: ");
    	scanf("%f", &floatVal);
    	printf("You entered float: %f.\n", floatVal);

	double doubleVal;
    	printf("\nEnter a double value: ");
    	scanf("%lf", &doubleVal);
    	printf("You entered double: %lf.\n", doubleVal);

	long double longDoubleVal;
    	printf("\nEnter a long double value: ");
    	scanf("%Lf", &longDoubleVal);
    	printf("You entered long double: %Lf.\n", longDoubleVal);

	return 0;
}
