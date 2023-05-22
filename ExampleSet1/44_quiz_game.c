#include <stdio.h>
#include <ctype.h>

int main44(void){
	char questions[][100] = {"1. What year did the C language debut?:  ",
						     "2. Who is credited with creating C?:  ",
							 "3. What is the predecessor of C?:  "};

	char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
						   "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
						   "A. Objective C", "B. B", "C. C++", "D. C#"};

	char answers[3] = {'B', 'A', 'B'};

	int question_number = sizeof(questions)/sizeof(questions[0]);

	char guess;
	int score = 0;

	printf("Quiz Game\n");

	for(int i = 0; i < question_number; i++){
		printf("\n*******************************************\n");
		printf("%s\n", questions[i]);
		printf("*******************************************\n");

		for(int j = i * 4; j < i * 4 + 4; j++){
			printf("%s\n", options[j]);
		}

		printf("\nGuess:  ");
		scanf("%c", &guess);
		scanf("%c"); // clear \n from input buffer

		guess = toupper(guess);

		if(guess == answers[i]){
			printf("\nCorrect!\n");
			score += 1;
		}
		else{
			printf("\nWrong!\n");
		}
	}

	printf("Your final score is %d/%d", score, question_number);

	return 0;
}
