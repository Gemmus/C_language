#include <stdio.h>

int main15(void) {

	char grade;

	printf("\nEnter a letter grade:  ");
	scanf("%c", &grade);

	switch(grade) {
		case 'A':
			printf("Perfect!\n");
			break;
		case 'B':
			printf("You did good!\n");
			break;
		case 'C':
			printf("You did okay!\n");
			break;
		case 'D':
			printf("At least it's not an F!\n");
			break;
		case 'F':
			printf("You failed!\n");
			break;
		default:
			printf("Please enter only valid grades");
	}

	return 0;
}
