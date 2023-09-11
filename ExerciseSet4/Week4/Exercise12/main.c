/*
Write a function count_words that takes two strings as a parameter and returns an integer. 
The function counts the number of times the second string occurs in the first string and returns the count. 
  
Use strstr() from standard library to find the strings. 
Note that if the string is found you need to advance past the current occurrence before searching again. 
Hint: use a pointer to the string and use pointer arithmetic to advance it past the current match.

Prototype of the function:

int count_words(const char* str, const char *word);

Write a program that asks user to enter a string and a word. 
Then program calls count_words and prints the return value. 
If the word was “stop” the program stops otherwise it asks user to enter a string and a word again.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 100

int string_comparer(const char * str1, const char * str2);
int count_words(const char* str, const char *word);

int main(void) {

    bool same = false;
    char text[MAX_LENGTH], word[MAX_LENGTH];
    const char exit[] = "stop";

    int count = -1, retval = -1;

    while(false == same) {

        printf("Enter the string: ");
        fgets(text, MAX_LENGTH, stdin);
        text[strcspn(text, "\n")] = 0;

        printf("Enter the word: ");
        fgets(word, MAX_LENGTH, stdin);
        word[strcspn(word, "\n")] = 0;

        count = count_words(text, word);

        if (count == 0) {
            printf("\"%s\" is not found in: \"%s\"\n", word, text);
        } else if (count > 0) {
            printf("\"%s\" occurs %d times in: \"%s\"\n", word, count, text);
        }

        retval = string_comparer(word, exit);
        if (0 == retval) {
            printf("You entered \"stop\" as the word. Bye!\n");
            same = true;
        }
    }

    return 0;
}

int string_comparer(const char * str1, const char * str2)
{
    while((*str1 && *str2) && (*str1 == *str2)) {
        str1++; str2++;
    }
    return *str1 - *str2;
}

int count_words(const char* str, const char *word)
{
    int count = 0;
    const char *ptr = NULL;

    if(str != NULL && word != NULL && *str != 0 && *word != 0) {
        do {
            ptr = strstr(str, word);
            if (ptr != NULL) {
                count++;
                str = ptr + strlen(word);
            }
        } while (ptr != NULL);
    }

    return count;
}
