/*
Write a C program to copy one string to another string using loop.
C program to copy one string to another without using inbuilt library function strcpy().
How to copy one string to another without using inbuilt string library function in C programming.
Effective logic to copy strings in C programming.
How to copy one string to another string using strcpy() function in C program.
(The non-selected methods needs to be commented out respectively to run it.)
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
    char input[MAX_LENGTH], copy[MAX_LENGTH];

    printf("Enter a string:\n");
    gets(input);

    // Using a for loop:
    for(int i = 0; input[i]!='\0'; i++){
    	copy[i] = input[i];
    }
    printf("The copied text: %s.", copy);

    // Using a while loop:
    int i = 0;
    while(input[i] != '\0'){
    	copy[i] = input[i];
    	i++;
    }
    printf("The copied text: %s.", copy);
    // or:
    int i = -1;
    while(text2[i] = text1[++i]);
   	printf("The copied text: %s.", copy);

    // Using pointer:
    char * str1 = input, * str2 = copy;
    while(*(str2++) = *(str1++));
    printf("The copied text: %s.", copy);

    // Using strcpy() function:
    strcpy(input, copy);
    printf("The copied text: %s.", copy);

    return 0;
}
