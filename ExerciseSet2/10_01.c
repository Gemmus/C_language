// Write a program that asks for the user's first and last name and saves these into a file named by the user.
// The program must start by asking for the first name.
// The last name is entered next, followed by the desired file name.
// The first part of the file name may have a maximum of 8 characters and the second part may have 3 (for example: personal.usr).
// The file must reside in the same directory as the program.
// The last name can have a maximum of 20 characters, the first name 15.

#include <stdio.h>
#include <string.h>

int main10_1(void){

	char first_name[15];
	char last_name[20];
	char file_name[12];
	int size;

	printf("Enter first name:  ");
	scanf("%s", &first_name[0]);

	printf("Enter last name:  ");
	scanf("%s", &last_name[0]);

	printf("Enter file name:  ");
	scanf("%s", &file_name[0]);

	size = strlen(file_name);
	file_name[size] = '.';

	printf("Enter file format:  ");
	scanf("%s", &file_name[size +1]);

	FILE *pF = fopen(file_name, "w");

	fprintf(pF, "%s %s", first_name, last_name);

	fclose(pF);

	return 0;
}
