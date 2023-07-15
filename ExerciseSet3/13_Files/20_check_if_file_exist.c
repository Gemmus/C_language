/*
Write a C program to check whether a file or directory exists or not. 
How to check file or directory exists or not in C programming. 
What is the best way to check file or directory exists or not in C programming.
*/

#include <stdio.h>
#include <unistd.h>
#include <io.h>
#include <sys/stat.h>

int isFileExists(const char *path);
int isFileExistsAccess(const char *path);
int isFileExistsStats(const char *path);

int main()
{
    char path[100];

    printf("Enter source file path: ");
    scanf("%s", path);

    if (isFileExistsAccess(path)) printf("File exists at path '%s'\n", path);
    else printf("File does not exists at path '%s'\n", path);

    return 0;
}

// Using fopen() function:
int isFileExists(const char *path)
{
    FILE *fptr = fopen(path, "r");

    if (fptr == NULL) return 0;

    fclose(fptr);

    return 1;
}

// Using access() function:
int isFileExistsAccess(const char *path)
{
    if (access(path, F_OK) == -1) return 0;

    return 1;
}

// Using stat() function:
int isFileExistsStats(const char *path)
{
    struct stat stats;

    stat(path, &stats);

    if (stats.st_mode & F_OK) return 1;

    return 0;
}
