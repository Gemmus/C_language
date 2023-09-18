/*
Write a program that asks user to enter a filename. Then program tries to open the file in textmode
for reading. If opening the file fails the program prints an error message with the filename to stderr
and then exits. 

If the file is opened the program starts reading integers from the file until reading
fails or the file ends. When reading stops the program prints the count of numbers and the lowest
and highest number that was read from the file. Then program closes the file.

For testing make a few text files with integers using your favourite text editor.
*/
/*
Write a program that asks user to enter a filename. Then program tries to open the file in textmode
for reading. If opening the file fails the program prints an error message with the filename to stderr
and then exits. 

If the file is opened the program starts reading integers from the file until reading
fails or the file ends. When reading stops the program prints the count of numbers and the lowest
and highest number that was read from the file. Then program closes the file.

For testing make a few text files with integers using your favourite text editor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50

int main()
{
    char filename[MAX_LENGTH];
    int num = 0, count = 0, lowest = 0, highest = 0;

    printf("Enter filename: ");
    fgets(filename, MAX_LENGTH, stdin);
    filename[strcspn(filename, "\n")] = 0;

    FILE * fPtr;
    fPtr = fopen(filename, "r");

    if(fPtr == NULL)
    {
        printf("Error. Unable to open file \"%s\". Bye!\n", filename);
        exit(EXIT_FAILURE);
    }

    printf("%s opened successfully. Reading from file...\n", filename);

    while (fscanf(fPtr, "%d", &num) != -1)
    {
        count++;
        if(num < lowest) {
            lowest = num;
        }
        if(num > highest) {
            highest = num;
        }
    }

    fclose(fPtr);

    printf("%d number(s) read overall. The lowest was: %d and the highest was: %d.\n", count, lowest, highest);

    return 0;
}
