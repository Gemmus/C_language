#include <stdio.h>
#include <stdlib.h>

int main4(void){
	int x; // declaration
	x = 123; // initialization
	int y = 321; // or done in one step:

	int age = 21; // integer
	float gpa = 2.05; // float
	char grade = 'C'; // single character
	char name[] = "Bro"; // array of characters, as in C there is no string

	printf("Hello %s!\n", name); // placeholder %s for string
	printf("You are %d years old.\n", age); // placeholder %d for integer
	printf("Your average grade is %c.\n", grade); // placeholder %c for character
	printf("Your gpa is %f.\n", gpa); // placeholder %f for float

	return 0;
}
