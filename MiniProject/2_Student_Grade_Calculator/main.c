#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 50
#define MIN_ITEM 1
#define MAX_ITEM 100
#define MIN_SCORE 0
#define MAX_SCORE 100
#define SEPARATOR "-----------------------------------------------------------------------"
#define FILE_NAME "student_report.txt"

typedef struct {
    char name[MAX_LENGTH];
    int score;
    int grade;
} Subject;


void strValidator(char *ptr, int max_char);
int intValidator(int low, int high);
int gradeCalculator(int score);
void reportGenerator(const char *name, int num_subject, Subject *subjects, double average);
void fileGenerator(const char *name, int num_subject, Subject *subjects, double average);
void fprintfValidator(int retval);

int main(void)
{
    /////////////////////////////////////////////////////////////
    //   Handles the user inputs and score/grade conversion:   //
    /////////////////////////////////////////////////////////////
    char name[MAX_LENGTH];
    int num_subject = 0, total = 0;
    double average = 0.0;
    Subject subjects[MAX_ITEM];
    Subject *subjects_ptr = (Subject *) &subjects;

    printf("Welcome to the Student Grade Calculator!\n");
    printf("Please enter your name: ");

    strValidator(name, MAX_LENGTH);
    printf("How many subjects do you want to calculate grades for?(0-100) ");
    num_subject = intValidator(MIN_ITEM, MAX_ITEM);

    for(int i = 0; i < num_subject; i++) {
        printf("Enter subject %d name: ", i + 1);
        strValidator(subjects[i].name, MAX_LENGTH);
        printf("Enter your score for %s (%d-%d): ", subjects[i].name, MIN_SCORE, MAX_SCORE);
        subjects[i].score = intValidator(MIN_SCORE, MAX_SCORE);
        subjects[i].grade = gradeCalculator(subjects[i].score);
        total += subjects[i].grade;
    }

    average = total / (double) num_subject;
    printf("\n");

    /////////////////////////////////////////////////////
    //   Call function to create report for console:   //
    ////////////////////////////////////////////////////
    reportGenerator(name, num_subject, subjects_ptr, average);

    //////////////////////////////////////////////////////
    //   Call function to create the report for file:   //
    /////////////////////////////////////////////////////
    fileGenerator(name, num_subject, subjects_ptr, average);

    return 0;
}

////////////////////////////////////////////////////
//   Function to validate correct string input:   //
////////////////////////////////////////////////////
void strValidator(char *ptr, int max_char)
{
    fgets(ptr, max_char, stdin);
    ptr[strcspn(ptr, "\n")] = 0;

}

/////////////////////////////////////////////////////
//   Function to validate correct integer input:   //
/////////////////////////////////////////////////////
int intValidator(int low, int high)
{
    char tempBuffer[MAX_LENGTH];
    int number = low - 1;

    do {
        fgets(tempBuffer, MAX_LENGTH, stdin);
        if (sscanf(tempBuffer, "%d", &number) != 1) {
            printf("Invalid input. Try again: ");
        } else if ((number < low) || (number > high)) {
            printf("Please enter a number between %d and %d. Try again: ", low, high);
        }
    } while ((number < low) || (number > high));

    return number;
}

/////////////////////////////////////////////////////
//   Function to calculate grade based on score:   //
/////////////////////////////////////////////////////
int gradeCalculator(int score)
{
    int grade = 0, minimum = 50;

    if ((score - minimum) < 0 ) {
        return grade;
    } else {
        grade = (score - minimum)/10 + 1;
        if (grade > 5) {
            grade = 5;
        }
    }

    return grade;
}

////////////////////////////////////////////////////
//   Function to create the report for console:   //
////////////////////////////////////////////////////
void reportGenerator(const char *name, int num_subject, Subject *subjects, double average)
{
    printf("%s\n"
           "Student: %-50s\n"
           "%s\n"
           "Subject                                           Score          Grade\n"
           "%s\n", SEPARATOR, name, SEPARATOR, SEPARATOR);

    for (int i = 0; i < num_subject; i++) {
        printf("%-50s %3d%% %14d\n", subjects[i].name, subjects[i].score, subjects[i].grade);
    }

    printf("\nAverage Grade: %.2lf\n"
           "%s\n", average, SEPARATOR);
}

/////////////////////////////////////////////////
//   Function to create the report for file:   //
/////////////////////////////////////////////////
void fileGenerator(const char *name, int num_subject, Subject *subjects, double average)
{
    FILE *fPtr;
    int retval = 0;

    if ((fPtr = fopen(FILE_NAME, "w")) == NULL) {
        printf("\nError creating file. Exiting...\n");
        exit(EXIT_FAILURE);
    } else {
        retval = fprintf(fPtr, "%s\n"
                               "Student: %-50s\n"
                               "%s\n"
                               "Subject                                           Score          Grade\n"
                               "%s\n", SEPARATOR, name, SEPARATOR, SEPARATOR);
        fprintfValidator(retval);

        for (int i = 0; i < num_subject; i++) {
            retval = fprintf(fPtr, "%-50s %3d%% %14d\n", subjects[i].name, subjects[i].score, subjects[i].grade);
            fprintfValidator(retval);
        }

        retval = fprintf(fPtr, "\nAverage Grade: %.2lf\n"
                               "%s\n", average, SEPARATOR);
        fprintfValidator(retval);

        fclose(fPtr);
        printf("\nFile '%s' created successfully.\n", FILE_NAME);
    }
}

/////////////////////////////////////////////////////
//   Function to check if fprintf is successful:   //
/////////////////////////////////////////////////////
void fprintfValidator(int retval)
{
    if (retval < 0) {
        printf("\nError writing to file. Exiting...\n");
        exit(EXIT_FAILURE);
    }
}
