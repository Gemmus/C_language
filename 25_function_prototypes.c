// Function prototype:
// Function declaration, without a body, before main()
// Ensures that calls to a function are made with the correct arguments
// Many C compliers do not check for parameter matching
// Missing arguments will result in unexpected behaviors

#include <stdio.h>

void hello25(char[], int); // won't compile, if arguments don't match

int main25(void){

	char name[] = "Sarah";
	int age = 21;

	hello25(name, 25);

	return 0;
}

void hello25(char name[], int age) {
	printf("\nHello %s!", name);
	printf("\nYou are %d years old", age);
}
