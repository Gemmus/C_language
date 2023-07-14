/*
Write a C program to input line number and replace specific line with another in text file. 
How to replace specific line in a text file in C programming. 
Logic to replace specific line with another in a text file in C program.
*/

#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1000

int main()
{
    FILE * fPtr;
    FILE * fTemp;
    char path[100];
    
    char buffer[BUFFER_SIZE];
    char newline[BUFFER_SIZE];
    int line, count;

    printf("Enter path of source file:\n");
    scanf("%s", path);

    printf("Enter line number to replace:\n");
    scanf("%d", &line);

    fflush(stdin);

    printf("Replace '%d' line with: ", line);
    fgets(newline, BUFFER_SIZE, stdin);

    fPtr  = fopen(path, "r");
    fTemp = fopen("replace.tmp", "w"); 

    if (fPtr == NULL || fTemp == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(EXIT_SUCCESS);
    }

    count = 0;
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        count++;
        if (count == line)
            fputs(newline, fTemp);
        else
            fputs(buffer, fTemp);
    }

    fclose(fPtr);
    fclose(fTemp);

    remove(path);
    rename("replace.tmp", path);

    printf("Successfully replaced '%d' line with '%s'.", line, newline);

    return 0;
}
