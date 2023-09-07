/*
That asks number of students and creates an array of that many integers.
Program then initializes the array elements to -1.
Then the program asks user to enter student number in range 1 – nr of students or zero to stop. If
valid non zero number is given the program asks user to enter grade in the range 0-5 or -1 to not
enter a grade for the student.
When user stops by entering 0 then program prints student numbers followed by grade or N/A if
grade is -1.
    
For example:
How many students: 4
Enter student number (1 – 4) or 0 to stop: 1
Enter grade (0 – 5) for student 1 or -1 to cancel: 2
Enter student number (1 – 4) or 0 to stop: 6
Invalid student number!
Enter student number (1 – 4) or 0 to stop: 3
Enter grade (0 – 5) for student 3 or -1 to cancel: 7
Invalid grade!
Enter grade (0 – 5) for student 3 or -1 to cancel: 5
Enter student number (1 – 4) or 0 to stop: 2
Enter grade (0 – 5) for student 2 or -1 to cancel: -1
Enter student number (1 – 4) or 0 to stop: 0
Student Grade
1 2
2 N/A
3 5
4 N/A
*/

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
