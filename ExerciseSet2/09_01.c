// Write a program that prints the text "Hello world!" into the file "hello.usr".
// The file does not exist, so it must be created.
// Finally, the program must print a message on the screen indicating that writing to the file was successful.
// The text printed to the file must exactly match the assignment.

#include <stdio.h>
#include <string.h>

int main9_1(void){

	const char text[] = "Hello world!";

	FILE *pF = fopen("hello.usr", "w");
	int retval = fprintf(pF, text);

	if(retval == strlen(text)){
		printf("Successfully written to the file.\n");
	}
	else{
		printf("Writing to the file was not successful.\n");
	}

	fclose(pF);

	return 0;
}
