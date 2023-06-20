/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
*/

#include <stdio.h>

int main(void){

	double grade1, grade2, grade3, grade4, grade5, average;

	printf("Enter the five grades:\n");
	scanf("%lf%lf%lf%lf%lf", &grade1, &grade2, &grade3, &grade4, &grade5);

	average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

	if(average >= 90) printf("Average is %.2lf. Grade A.", average);
	else if(average >= 80) printf("Average is %.2lf. Grade B.", average);
	else if(average >= 70) printf("Average is %.2lf. Grade C.", average);
	else if(average >= 60) printf("Average is %.2lf. Grade D.", average);
	else if(average >= 40) printf("Average is %.2lf. Grade E.", average);
	else if(average < 40) printf("Average is %.2lf. Grade F.", average);

	return 0;
 }
