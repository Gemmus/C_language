/*
Write a C program to concatenate two strings in single string. How to concatenate two strings to one without using strcat() library function.
Adding two strings into one without using inbuilt library function. Logic to concatenate two strings in C programming.
C program to concatenate two strings using strcat() library function.
(The non-selected methods needs to be commented out respectively to run it.)
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
    char input1[MAX_LENGTH], input2[MAX_LENGTH];

    printf("Enter first string:\n");
    gets(input1);

    printf("Enter second string:\n");
    gets(input2);

    // Using a while loop:
    int i = 0;
    while(input1[++i]);
    // or:
    /*
        while(str1[i] != '\0')
    {
        i++;
    }
    */
    int j = 0;
    while(input1[i++] = input2[j++]);
    // or:
    /*
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
	*/
    input1[i] = '\0';
    printf("Concatenated string = %s\n", input1);

    // Using pointer:
    char * str1 = input1, * str2 = input2;
    while(*(++str1));
    while(*(str1++) = *(str2++));
    printf("Concatenated string = %s\n", input1);

    // Using strcat() function:
    strcat(input1, input2);
    printf("Concatenated string = %s\n", input1);

    return 0;
}
