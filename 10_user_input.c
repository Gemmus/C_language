#include <stdio.h>
#include <string.h>

int main10(void){

	char name[25]; // bytes

	printf("What is your name?  ");
	// scanf("%s", &name); --> Only scans until white space
	fgets(name, 25, stdin); // adds automatically a \n, to get rid of it:
	name[strlen(name)-1] = '\0';
	printf("Hello %s!\n", name);


	int age;

	printf("How old are you?  ");
	scanf("%d", &age);
	printf("You are %d years old.", age);

	return 0;
}
