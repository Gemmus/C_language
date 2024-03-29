/*
Write a function called replace_char that takes two strings as parameters and returns an integer.

The first string is the string to modify and the second is a string containing two characters.
The function finds every occurrence of the first character of the second string and replaces them with the second character.

For example:
char text[80] = “I am so tired of Python. C is much better language”;
count = replace_char(test, “e3”);

The call above will find every occurrence of ‘e’ and replace it with ‘3’.

Prototype of the function:

int replace_char(char *str, const char *repl);

The function returns the number of characters replaced.
The return value can be zero if no characters were found or if the second string does not contain two characters.

Write a program that asks user to enter both strings and then calls replace_char.
The program prints both return value and the modified string if the return value is greater than zero.
If the return value is zero program prints “String was not modified”.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define REPL_LENGTH 3

int replace_char(char *str, const char *repl);

int main(void) {

    int count = -1;
    char text[MAX_LENGTH], replacement[REPL_LENGTH];

    printf("Enter the text part: ");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = 0;

    printf("Enter the letter to be replaced and the replacement letter: ");
    fgets(replacement, REPL_LENGTH, stdin);

    replacement[strcspn(replacement, "\n")] = 0;

    count = replace_char(text, replacement);

    if (count == 0) {
        printf("String was not modified.");
    } else {
        printf("%s", text);
    }

    return 0;
}

int replace_char(char *str, const char *repl)
{
    int replace_count = 0;

    for(; *str != '\0'; str++) {
        if(*str == repl[0]) {
            *str = repl[1];
            replace_count++;
        }
    }

    return replace_count;
}
