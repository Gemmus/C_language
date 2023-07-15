/*
Write a C program to print source code of itself as output. 
How to print source code of itself as output in C programming. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPtr;
    
    char ch;

    fPtr = fopen(__FILE__, "r");

    if (fPtr == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(EXIT_SUCCESS);
    }

    while ((ch = fgetc(fPtr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fPtr);

    return 0;
}
