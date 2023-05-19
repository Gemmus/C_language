#include <stdio.h>

void birthday22(char name[], int age){
	printf("Happy Birthday Dear %s!\n", name);
	printf("HYou have become %d years old", age);
}

int main22(void) {
	char name[] = "Lisa";
	int age = 25;

	birthday22(name, age);

	return 0;
}
