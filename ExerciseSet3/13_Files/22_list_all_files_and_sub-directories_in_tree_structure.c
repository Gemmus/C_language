/*
Write a C program to list all files in a directory.
How to list all files in a directory recursively.
How to use readdir() function to list all files in a directory recursively.
Logic to list all files and sub-directories of a directory in C programming.
How to use opendir(), readdir() and closedir() library functions.
*/
/**
 * C program to list file and sub-directories of a directory
 * recursively in tree structure.
 */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>

void tree(char *basePath, const int root);

int main()
{
    char path[100];

    printf("Enter path to list files:\n");
    scanf("%s", path);

    tree(path, 0);

    return 0;
}

void tree(char *basePath, const int root)
{
    int i;
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);

    if (!dir) return;

    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            for (i=0; i<root; i++)
            {
                if (i%2 == 0 || i == 0) printf("%c", 179);
                else printf(" ");

            }

            printf("%c%c%s\n", 195, 196, dp->d_name);

            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);
            tree(path, root + 2);
        }
    }

    closedir(dir);
}
