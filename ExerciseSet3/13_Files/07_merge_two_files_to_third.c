/*
Write a C program to merge contents of two files to third file.
Logic to merge two files to third file in C program.
How to merge contents of two files to third file in C programming.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr1;
    FILE * fPtr2;
    FILE * fPtr3;
    char path1[100], path2[100], path3[100], ch;

    printf("Enter the path of first file:\n");
    scanf("%s", path1);
    printf("Enter the path of second file:\n");
    scanf("%s", path2);
    printf("Enter the name of third file:\n");
    scanf("%s", path3);

    fPtr1 = fopen(path1, "r");
    fPtr2 = fopen(path2, "r");
    fPtr3 = fopen(path3, "w");

    if (fPtr1 == NULL || fPtr2 == NULL || fPtr3 == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fPtr1)) != EOF)
    {
        fputc(ch, fPtr3);
    }

    while ((ch = fgetc(fPtr2)) != EOF)
    {
        fputc(ch, fPtr3);
    }

    printf("The two files copied successfully to the third.\n");
    
    fclose(fPtr1);
    fclose(fPtr2);
    fclose(fPtr3);

    return 0;
}
