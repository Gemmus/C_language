/*
Write a C program to rename a file using rename() function. 
How to rename a file using rename() function in C programming. 
rename() function in C programming.
*/

#include <stdio.h>

int main()
{
    char oldName[100], newName[100];

    printf("Enter old file path:\n");
    scanf("%s", oldName);

    printf("Enter new file path:\n");
    scanf("%s", newName);

    if (rename(oldName, newName) == 0) printf("File renamed successfully.\n");
    else printf("Unable to rename files. Please check files exist and you have permissions to modify files.\n");

    return 0;
}
