/*
Write a program that reads data from a text file into an array of structures. The size of the array is 40
elements.

The structure is defined as:

typedef struct menu_item_ {
 char name[50];
 double price;
} menu_item;

The program asks user to enter a filename. Then program tries to open the file in textmode for
reading. If opening the file fails the program prints an error message with the filename to stderr and
then exits.

Program reads data from the text file into the array until end of file or the array is full. Each row of
the file contains data of one structure. The members are separated by semicolons.

For example:

Mega double burger with bacon and cheese; 23.50
Belgian style fries with vegan mayo; 5.60

When reading ends the program closes the file and prints the content of the array in formatted
columns. Price is printed into a field of eight characters with two decimals precision followed by the
name of the item. Unused elements are not printed.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 40
#define MAX_CHAR 50

typedef struct menu_item_ {
    char name[MAX_CHAR];
    double price;
} menu_item;

int main(void) {

    char filename[MAX_CHAR];
    menu_item menu[MAX_ITEMS];
    int count = 0;

    // Asking for filename:
    printf("Enter filename: ");
    fgets(filename, MAX_CHAR, stdin);
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

        // Putting file into file_array:
        while (count < MAX_ITEMS && fscanf(fPtr, "%[^;]; %lf\n", menu[count].name, &menu[count].price) == 2) {
            count++;
        }

        fclose(fPtr);

        printf("... done and file closed.\n\n");
    }

    printf("   Price | Menu item\n"
           "------------------------------------------------------------------\n");

    for(int i = 0; i < count; i++) {
        printf("%8.2lf | %.*s\n", menu[i].price, MAX_CHAR, menu[i].name);
    }

    return 0;
}
