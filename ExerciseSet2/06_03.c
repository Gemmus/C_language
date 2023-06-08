// Write a program that asks for the students' exam scores (using integers 4 to 10)
// and calculates the average. The program must accept scores until entry is terminated by a negative integer.
// Finally, the program prints out the number of scores and the calculated average with two decimal places of precision.

#include <stdio.h>


int main6_3(void){

	const int SIZE = 500;
	int array[SIZE];
	int grade;
	int number_of_grades = 0;
	float average = 0;

	do{
		printf("Enter your grade:  ");
		int scanfret = scanf("%d", &grade);
		if( scanfret == 1) {
			if( 4 <=  grade && grade <= 10) {
				if (number_of_grades < sizeof(array)/sizeof(array[0])){
					array[number_of_grades] = grade;
					number_of_grades++;
				}
			}
		} else {
			grade = 0;
		}
	}while(grade >= 0);

	for(int i = 0; i < number_of_grades; i++){
		average += array[i];
	}

	float result = average / number_of_grades;

	printf("%.2f", result);

	return 0;
}

/*
int main(void){

	int grade;
	int times = 0;
	float average = 0;

	do{
		printf("Enter your grade:  ");
		scanf("%d", &grade);
		if( 4 <=  grade && grade <= 10) {
			average += grade;
			times++;}
	}while(grade >= 0);

	float result = average / times;
	printf("%.2f", result);

	return 0;
}
*/
