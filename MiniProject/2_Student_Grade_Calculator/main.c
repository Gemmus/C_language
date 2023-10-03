/* 
Student grade calculator
Write a program that calculates and displays the final grades for a student based on their scores in
different subjects. The program should allow the user to input scores for multiple subjects and then
calculate the average grade and overall grade for the student.
  
Requirements:
• The program should start by asking the user for their name.
• Then, it should ask the user how many subjects they want to calculate grades for.
• For each subject, the program should prompt the user to enter the subject name and the
score (as a percentage).
• Calculate the average grade based on the scores and display it.
• Determine and display the overall grade based on the following grading scale:
    o 5: 90-100
    o 4: 80-89
    o 3: 70-79
    o 2: 60-69
    o 1: 50-59
    o 0: Below 50
• The program must also write the same report to a file

Welcome to the Student Grade Calculator!
Please enter your name: John Deere
How many subjects do you want to calculate grades for? 3
  
Enter subject 1 name: C Programming
Enter your score for C Programming (0-100): 85
  
Enter subject 2 name: Python
Enter your score for Python (0-100): 92
  
Enter subject 3 name: Computer Architecture
Enter your score for Computer Architecture (0-100): 68
  
-------------------------------------------
Student: John Deere
-------------------------------------------
Subject                    Score     Grade
-------------------------------------------
C Programming                85%         4
Python                       92%         5
Computer Architecture        68%         2

Average Grade: 3.67
-------------------------------------------
*/

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

void strValidator(char *ptr, int max_char);
int intValidator(int low, int high);
int gradeCalculator(int score);
void reportGenerator(const char *name, int num_subject, const char subjects[][MAX_LENGTH], const int scores[], const int grades[], double average);
void fileGenerator(const char *filename, const char *name, int num_subject, const char subjects[][MAX_LENGTH], const int scores[], const int grades[], double average);
void fprintfValidator(int retval);

int main(void)
{
    /////////////////////////////////////////////////////////////
    //   Handles the user inputs and score/grade conversion:   //
    /////////////////////////////////////////////////////////////
    char name[MAX_LENGTH];
    int num_subject = 0, total = 0;
    double average = 0.0;

    printf("Welcome to the Student Grade Calculator!\n");
    printf("Please enter your name: ");

    strValidator(name, MAX_LENGTH);
    printf("How many subjects do you want to calculate grades for?(0-100) ");
    num_subject = intValidator(MIN_ITEM, MAX_ITEM);

    char subjects[num_subject][MAX_LENGTH];
    int scores[num_subject], grades[num_subject];

    for(int i = 0; i < num_subject; i++) {
        printf("Enter subject %d name: ", i + 1);
        strValidator(subjects[i], MAX_LENGTH);
        printf("Enter your score for %s (%d-%d): ", subjects[i], MIN_SCORE, MAX_SCORE);
        scores[i] = intValidator(MIN_SCORE, MAX_SCORE);
        grades[i] = gradeCalculator(scores[i]);
        total += grades[i];
    }

    average = total / (double) num_subject;
    printf("\n");

    /////////////////////////////////////////////////////
    //   Call function to create report for console:   //
    ////////////////////////////////////////////////////
    reportGenerator(name, num_subject, subjects, scores, grades, average);

    //////////////////////////////////////////////////////
    //   Call function to create the report for file:   //
    /////////////////////////////////////////////////////
    fileGenerator(FILE_NAME, name, num_subject, subjects, scores, grades, average);

    return 0;
}

////////////////////////////////////////////////////
//   Function to validate correct string input:   //
////////////////////////////////////////////////////
void strValidator(char *ptr, int max_char)
{
    fgets(ptr, max_char, stdin);
    ptr[strlen(ptr)-1] = '\0';
    fflush(stdin);

}

/////////////////////////////////////////////////////
//   Function to validate correct integer input:   //
/////////////////////////////////////////////////////
int intValidator(int low, int high) 
{
    int number = low - 1;

    do {
        if (scanf("%d", &number) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Try again: ");
        } else if ((number < low) || (number > high)) {
            printf("Please enter a number between %d and %d. Try again: ", low, high);
        }
    } while ((number < low) || (number > high));

    fflush(stdin);

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
void reportGenerator(const char *name, int num_subject, const char subjects[][MAX_LENGTH], const int scores[], const int grades[], double average)
{
    printf("%s\n"
           "Student: %-50s\n"
           "%s\n"
           "Subject                                           Score          Grade\n"
           "%s\n", SEPARATOR, name, SEPARATOR, SEPARATOR);

    for (int i = 0; i < num_subject; i++) {
        printf("%-50s %3d%% %14d\n", subjects[i], scores[i], grades[i]);
    }

    printf("\nAverage Grade: %.2lf\n"
           "%s\n", average, SEPARATOR);
}

/////////////////////////////////////////////////
//   Function to create the report for file:   //
/////////////////////////////////////////////////
void fileGenerator(const char *filename, const char *name, int num_subject, const char subjects[][MAX_LENGTH], const int scores[], const int grades[], double average)
{
    FILE *fPtr;
    int retval = 0;

    if ((fPtr = fopen(filename, "w")) == NULL) {
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
            retval = fprintf(fPtr, "%-50s %3d%% %14d\n", subjects[i], scores[i], grades[i]);
            fprintfValidator(retval);
        }

        retval = fprintf(fPtr, "\nAverage Grade: %.2lf\n"
                               "%s\n", average, SEPARATOR);
        fprintfValidator(retval);

        fclose(fPtr);
        printf("\nFile '%s' created successfully.\n", filename);
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
