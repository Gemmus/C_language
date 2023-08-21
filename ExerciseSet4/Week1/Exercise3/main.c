#include <stdio.h>

int main(void)
{
    int number_of_students = 0, student = -1, grade = -2;

    do {
        printf("How many array_of_grades: ");
        scanf("%d", &number_of_students);
    } while(number_of_students <= 0);

    int array_of_grades[number_of_students];

    for(int i = 0; i < number_of_students; i++) {
        array_of_grades[i] = -1;
    }

    do {
        printf("\nEnter student number (1 - %d) or 0 to stop: ", number_of_students);
        scanf("%d", &student);
        if((1 <= student) && (student <= number_of_students)) {
            printf("Enter grade (0 - 5) for student  or -1 to cancel: ");
            scanf("%d", &grade);
            while((grade <= -2) || (grade >= 6)) {
                printf("Invalid grade!\n");
                printf("Enter grade (0 - 5) for student  or -1 to cancel: ");
                scanf("%d", &grade);
            }
            if((0 <= grade) && (grade <= 5)) {
                array_of_grades[student - 1] = grade;
            }
            else if(grade == -1) {
                student = -1;
            }
        }
        else if (student != 0){
            printf("Invalid student number!\n");
        }
    } while(student != 0);

    printf("\nStudent    Grade\n");

    for(int i = 0; i < number_of_students; i++) {

        if (array_of_grades[i] != -1) {
            printf("%-8d   %-8d\n", i + 1, array_of_grades[i]);
        }
        else {
            printf("%-8d   N/A\n", i + 1);
        }
    }

    return 0;
}
