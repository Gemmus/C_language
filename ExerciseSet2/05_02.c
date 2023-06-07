// Write a program that first asks the user whether they drink coffee or tea and then how many cups a day.
// Finally, the program prints a statement in accordance with the following instructions:
// Coffee 0 to 2 cups: "You don't drink a lot of coffee, do you?",
// coffee 3-20 cups: "You drink a lot of coffee!",
// Tea 0-2 cups: "You do not drink a lot of tea.",
// tea 3-20 cups: "You drink a lot of tea!",
// Otherwise "An error occurred in the program!"
// The number of cups shall be processed as an integer variable and the drink as a character variable (c/t).
// You do not need to account for upper case letters.

#include <stdio.h>
#include <ctype.h>

void errorPrinter(){
	printf("\nAn error occurred in the program!\n");
}

int cupAsker(char drink[]){
	int cup = 0;

	printf("How many cups of %s do you drink?  ", drink);
	scanf("%d", &cup);

	return cup;
}

int main5_2(void){

	char choice;
	int cups;

	printf("Do you prefer coffee or tea? (c/t)  ");
	scanf("%c", &choice);
	choice = tolower(choice);

	if(choice == 'c'){
		cups = cupAsker("coffee");
		if(0 <= cups && cups <= 2){
			printf("You don't drink a lot of coffee, do you?");
		}
		else if(3 <= cups && cups <= 20){
			printf("You drink a lot of coffee!");
		}
		else{
			errorPrinter();
		}
	}
	else if(choice == 't'){
		cups = cupAsker("tea");
		if(0 <= cups && cups <= 2){
			printf("You do not drink a lot of tea.");
		}
		else if(3 <= cups && cups <= 20){
			printf("You drink a lot of tea!");
		}
		else{
			errorPrinter();
		}
	}
	else{
		errorPrinter();
	}

	return 0;
}
