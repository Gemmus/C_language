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

#define MAX_CHAR 80
#define MAX_LINE 100

int main(void) {

    char filename[MAX_CHAR];
    char character;
    char file_array[MAX_LINE][MAX_CHAR];

    for(int i = 0; i < MAX_LINE; i++) {
        for(int j = 0; j < MAX_CHAR; j++) {
            file_array[i][j] = ' ';
        }
    }

    // Asking for filename:
    printf("Enter filename: ");
    fgets(filename, MAX_CHAR, stdin);
    filename[strcspn(filename, "\n")] = 0;

    // Reading file:
    FILE * fPtr;
    fPtr = fopen(filename, "r");

    if(fPtr == NULL)
    {
        printf("\nError. Unable to open file \"%s\" for reading. Bye!\n", filename);
        exit(EXIT_FAILURE);
    } else {
        printf("\n\"%s\" opened successfully. Reading from file and putting input into file_array...\n", filename);

        // Putting file into file_array:
        do {
            for(int i = 0; i < MAX_LINE; i++) {
                for(int j = 0; j < MAX_CHAR; j++) {
                    character = fgetc(fPtr);
                    if ( character != '\n') {
                        file_array[i][j] = character;
                    } else {
                        j = MAX_CHAR;
                    }
                }
            }
        } while (character != EOF);

        fclose(fPtr);

        printf("... done and file closed.\n\n");
    }

    // toupper():
    for(int i = 0; i < MAX_LINE; i++) {
        for(int j = 0; j < MAX_CHAR; j++) {
            file_array[i][j] = toupper(file_array[i][j]);
        }
    }

    // Writing to file:
    fPtr = fopen(filename, "w");

    if(fPtr == NULL)
    {
        printf("Error. Unable to open file \"%s\" for writing. Bye!\n", filename);
        exit(EXIT_FAILURE);
    } else {
        printf("\"%s\" opened successfully. Writing to file from file_array...\n", filename);


        for(int i = 0; i < MAX_LINE; i++) {
            for(int j = 0; j < MAX_CHAR; j++) {
                if(file_array[i][j] >= 32) {
                    fprintf(fPtr, "%c",file_array[i][j]);
                }
            }
            fprintf(fPtr, "\n");
        }

        fclose(fPtr);

        printf("... done and file closed.\n");
    }

    return 0;
}
