// Write a program that prompts the user for a word (max 15 lower-case letters)
// and calculates the number of vowels (a, e, i, o, u, y) in the word.

// Hint: You have learned to compare the value of a character variable to 'a', for example.
// You can use an index to refer to single characters in a string array. (char[] = "word"; word[1] == 'a';)

#include <stdio.h>
#include <string.h>

int main10_2(void){

	char word[15];
	int vowels = 0;

	printf("Enter a word(max 15 lower-case letters):  ");
	scanf("%s", &word);

	for(int i = 0; i < strlen(word); i++){
		if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'){
			vowels++;
		}
	}

	printf("\nThe number of vowels in the entered word: %d.", vowels);

	return 0;
}

