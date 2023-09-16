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

int int_validator(int low, int high);
int grade_calculator(int score);

int main(void)
{
    ///////////////////////////////////////////////////////////////
    //   Handles the user inputs and score/grade manipulation:   //
    ///////////////////////////////////////////////////////////////

    char name[MAX_LENGTH];
    int num_subject = 0, total = 0;
    double average = 0.0;

    printf("Welcome to the Student Grade Calculator!\n");
    printf("Please enter your name: ");
    fgets(name, MAX_LENGTH, stdin);
    name[strlen(name)-1] = '\0';
    printf("How many subjects do you want to calculate grades for? ");
    num_subject = int_validator(MIN_ITEM, MAX_ITEM);

    char subjects[num_subject][MAX_LENGTH];
    int scores[num_subject], grades[num_subject];

    for(int i = 0; i < num_subject; i++) {
        printf("Enter subject %d name: ", i + 1);
        fgets(subjects[i], MAX_LENGTH, stdin);
        subjects[i][strlen(subjects[i])-1] = '\0';
        printf("Enter your score for %s (%d-%d): ", subjects[i], MIN_SCORE, MAX_SCORE);
        scores[i] = int_validator(MIN_SCORE, MAX_SCORE);
        grades[i] = grade_calculator(scores[i]);
        total += grades[i];
    }

    average = total / (double) num_subject;
    printf("\n");

    /////////////////////////////////////////
    //   Creates the report for console:   //
    /////////////////////////////////////////

    printf("-----------------------------------------------------------------------\n"
           "Student: %s \n"
           "-----------------------------------------------------------------------\n"
           "Subject                                           Score          Grade \n"
           "-----------------------------------------------------------------------\n"
            , name);

    for(int i = 0; i < num_subject; i++) {
        printf("%-50s %3d%% %14d\n", subjects[i], scores[i], grades[i]);
    }

    printf("\nAverage Grade: %.2lf \n"
           "-----------------------------------------------------------------------\n"
            , average);

    //////////////////////////////////////
    //   Creates the report for file:   //
    //////////////////////////////////////

    char filename[MAX_LENGTH] = "grade_report.txt";
    FILE * fPtr;
    fPtr = fopen(filename, "w");

    if(fPtr == NULL)
    {
        printf("\nUnable to create file.\n");
        exit(EXIT_FAILURE);
    }

    fprintf(fPtr, "-----------------------------------------------------------------------\n"
                  "Student: %s \n"
                  "-----------------------------------------------------------------------\n"
                  "Subject                                           Score          Grade \n"
                  "-----------------------------------------------------------------------\n"
            , name);

    for(int i = 0; i < num_subject; i++) {
        fprintf(fPtr, "%-50s %3d%% %14d\n", subjects[i], scores[i], grades[i]);
    }

    fprintf(fPtr,"\nAverage Grade: %.2lf \n"
                 "-----------------------------------------------------------------------\n"
            , average);

    fclose(fPtr);

     printf("\nFile created and saved successfully under filename: %s\n", filename);

    return 0;
}

int int_validator(int low, int high) {

    int number = low - 1;

    do {
        if (scanf("%d", &number) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Try again: ");
        } else if ((number < low) || (number > high)) {
            printf("Out of range! Try again: ");
        }
    } while ((number < low) || (number > high));

    fflush(stdin);

    return number;
}

int grade_calculator(int score) {

    int grade = 0;

    if (score => 90) {
        grade = 5;
    } else if (score >= 80) {
        grade = 4;
    } else if (score >= 70) {
        grade = 3;
    } else if (score >= 60) {
        grade = 2;
    } else if (score >= 50) {
        grade = 1;
    }

    return grade;
}
