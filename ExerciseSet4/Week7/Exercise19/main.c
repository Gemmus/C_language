/*
Extend program of Ex15 so that after reading the file content the program asks user to choose
sorting order of the menu. User can choose to sort by price or by name.

Write comparison functions for sorting by name and by price and use qsort() from standard library
to sort the array before printing.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 40
#define MAX_CHAR 50
#define BY_NAME 1
#define BY_PRICE 2

typedef struct menu_item_ {
    char name[MAX_CHAR];
    double price;
} menu_item;

int intValidator(int low, int high);
int compareByName(const void *item1, const void *item2);
int compareByPrice(const void *item1, const void *item2);

int main(void) {

    char filename[MAX_CHAR];
    menu_item menu[MAX_ITEMS];
    int count = 0, sorting_method = 0;

    printf("Enter filename: ");
    fgets(filename, MAX_CHAR, stdin);
    filename[strcspn(filename, "\n")] = 0;

    FILE *fPtr;
    fPtr = fopen(filename, "r");

    if (fPtr == NULL) {
        fprintf(stderr, "\nError. Unable to open file \"%s\" for reading. Bye!\n", filename);
        exit(EXIT_FAILURE);
    } else {
        printf("\n\"%s\" opened successfully. Reading from file...\n", filename);

        while (count < MAX_ITEMS && fscanf(fPtr, "%[^;]; %lf\n", menu[count].name, &menu[count].price) == 2) {
            count++;
        }

        fclose(fPtr);

        printf("... done and file closed.\n\n");
    }

    printf("Please choose the method of sorting.\n"
           "%d: By name.\n"
           "%d: By price.\n"
           "Enter your selection (%d-%d): ", BY_NAME, BY_PRICE, BY_NAME, BY_PRICE);
    sorting_method = intValidator(BY_NAME,BY_PRICE);

    if (sorting_method == 1) {
        qsort(menu, count, sizeof(menu_item), compareByName);
        printf("\nHere is the menu sorted by name:\n");
    } else if (sorting_method == 2) {
        qsort(menu, count, sizeof(menu_item), compareByPrice);
        printf("\nHere is the menu sorted by price:\n");
    }

    printf("   Price | Menu item  \n"
           "------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%8.2lf | %s\n", menu[i].price, menu[i].name);
    }

    return 0;
}

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

int compareByName(const void *item1, const void *item2) {
    const menu_item *first_item = (const menu_item *)item1;
    const menu_item *second_item = (const menu_item *)item2;
    return strcmp(first_item->name, second_item->name);
}

int compareByPrice(const void *item1, const void *item2) {
    const menu_item *first_item = (const menu_item *)item1;
    const menu_item *second_item = (const menu_item *)item2;
    if (first_item->price < second_item->price) {
        return -1;
    }
    if (first_item->price > second_item->price) {
        return 1;
    }
    return 0;
}
