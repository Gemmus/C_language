// Pointer:
// - a "variable-like" reference that holds a memory address to another variable, array, etc.
// - some tasks are performed more easily with pointers
// * = indirection operator (value at address)

#include <stdio.h>

void printage47(int age){
	printf("You are %d years old.\n", age);
}

void printpAge47(int *pAge){
	printf("You are %d years old.\n", *pAge);
}

int main47(void){

	int age = 21;

	int *pAge = &age; // to declare a pointer
	// or
	/* int *pAge = NULL;
	   pAge = &age; */

	printf("Address of age: %p\n", &age); //0x7ffcca0b713c
	printf("Value of pAge: %p\n", pAge);

	printf("Value of age: %d\n", age);
	printf("Value at stored address: %d\n", *pAge);

	printf("Size of age: %d bytes\n", sizeof(age));
	printf("Size of pAge: %d bytes\n", sizeof(pAge));

	printage47(age);
	printpAge47(pAge); //needs dereference

	return 0;
}
