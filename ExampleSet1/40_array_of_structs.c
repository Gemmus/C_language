#include <stdio.h>
#include <string.h>

struct Student{
	char name[12];
	float gpa;
};

int main40(void){

	struct Student student1 = {"Sandy", 3.05};
	struct Student student2 = {"David", 2.67};
	struct Student student3 = {"Bill", 4.78};
	struct Student student4 = {"Max", 1.57};

	struct Student students[] = {student1, student2, student3, student4};

	for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
			printf("%s\t %.2f\n", students[i].name, students[i].gpa);
	}

	return 0;
}
