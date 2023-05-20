#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main26(void){
	char string1[] = "Cat";
	char string2[] = "Dog";

	//strcat(string1, string2); 		// appends string 2 to end of string1 --> CatDog
	strncat(string1, string2, 1); 	// appends n characters from string2 to string1 --> CatD
	//strcpy(string1, string2); 		// copies string2 to string1 --> Dog
	//strncpy(string1, string2, 2);		// copies n characters of string2 to string1 --> Dot

	printf("%s", string1);

	//int result = strlen(string1); 				//returns sting length as int --> 3
	int result = strcmp(string1, string2);		// string compare all characters
	//int result = strncmp(string1, string2, 1);	// string compare n characters


	printf("%d", result);

	if (result == 0) {
		printf("These are the same");
	}
	else{
		printf("Not the same");
	}

	return 0;
}
