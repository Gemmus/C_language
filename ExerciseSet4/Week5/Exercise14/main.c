/*
Write a program that reads lines of text in to an array of strings. The maximum length of the line is
80 characters and the maximum number of lines is 100.

The program asks user to enter a filename. Then program tries to open the file in textmode for
reading. If opening the file fails the program prints an error message with the filename to stderr and
then exits. 

The program reads lines from the file into the array until the file ends or the array is full (100 lines read). 
Then program closes the file.

Then program converts all letters to upper case (see toupper() – function).

Then program opens the file for writing in text mode and writes all read lines to file and closes the file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 80
#define MAX_LINES 100

int main(void) {

    char filename[MAX_LINE_LENGTH];
    char file_array[MAX_LINES][MAX_LINE_LENGTH];
    int line_count = 0;

    // Asking for filename:
    printf("Enter filename: ");
    fgets(filename, MAX_LINE_LENGTH, stdin);
    filename[strcspn(filename, "\n")] = 0;

    // Reading file:
    FILE * fPtr;
    fPtr = fopen(filename, "r");

    if(fPtr == NULL)
    {
        fprintf(stderr, "\nError. Unable to open file \"%s\" for reading. Bye!\n", filename);
        exit(EXIT_FAILURE);

    } else {
        printf("\n\"%s\" opened successfully. Reading from file...\n", filename);

        while (!feof(fPtr) && line_count < MAX_LINES) {
            fgets(file_array[line_count], MAX_LINE_LENGTH, fPtr);
            line_count++;
        }

        fclose(fPtr);

        printf("... done and file closed.\n\n");
    }

    // toupper():
    for(int i = 0; i < line_count; i++) {
        for(int j = 0; file_array[i][j] != 0; j++) {
            file_array[i][j] = toupper(file_array[i][j]);
        }
    }
    printf("toupper() applied.\n\n");

    // Writing to file:
    fPtr = fopen(filename, "w");

    if(fPtr == NULL)
    {
        fprintf(stderr, "Error. Unable to open file \"%s\" for writing. Bye!\n", filename);
        exit(EXIT_FAILURE);
    } else {
        printf("\"%s\" opened successfully. Writing to file...\n", filename);

        for(int i = 0; i < line_count; i++) {
            fprintf(fPtr, "%s", file_array[i]);
        }

        fclose(fPtr);

        printf("... done and file closed.\n");
    }

    return 0;
}
