// Enum:
// - a user defined type of named integer identifiers
// - helps to make a program more readable

#include <stdio.h>
#include <string.h>

enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

int main41(void){

	enum Day today = Sun;

	//printf("%d", today); // prints: 7

	if(today == Sat || today == Sun){
		printf("It's weekend.");
	}
	else{
		printf("It's weekday.");
	}

	return 0;
}

