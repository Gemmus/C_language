/*
Write a C program to list all files in a directory.
How to list all files in a directory recursively.
How to use readdir() function to list all files in a directory recursively.
Logic to list all files and sub-directories of a directory in C programming.
How to use opendir(), readdir() and closedir() library functions.
*/

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

void listFiles(const char *path);

int main()
{
    char path[100];

    printf("Enter path to list files:\n");
    scanf("%s", path);

    listFiles(path);

    return 0;
}

void listFiles(const char *path)
{
    struct dirent *dp;
    DIR *dir = opendir(path);

    if (!dir) return;

    while ((dp = readdir(dir)) != NULL)
    {
        printf("%s\n", dp->d_name);
    }

    closedir(dir);
}
