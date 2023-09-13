/*
Write a program that asks user to enter a string.
Program must use fgets to read user input and remove the linefeed at the end of the string.
Then program prints the length of the string and checks if the string is “stop”.
If it is the program stops else program asks user to enter a new string (and prints the length etc.)
 */

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void len_count_print_for(char input[]);
void len_count_print_while(char input[]);
void len_count_print_strlen(char input[]);
void len_count_print_ptr(const char * str);
int str_comp_strcmp(char input[], char exit[]);
int str_comp_ptr(const char * str1, const char * str2);

int main(void)
{
    char input[MAX_LENGTH];
    const char exit[] = "stop";
    int retval = -1;

    do {
        ////////////////////////////////////////////////
        //   Request for the string and 'fgets' it:   //
        ////////////////////////////////////////////////

        printf("Enter a string: ");
        fgets(input, MAX_LENGTH, stdin);

        /////////////////////////////////////////////////////////
        //   Removing the linefeed at the end of the string:   //
        /////////////////////////////////////////////////////////

        input[strcspn(input, "\n")] = 0;

        /////////////////////////////////////////////////////////////////////////
        //   Calling function to count string length:                         //
        //   (Make your selection, pointer version is selected by default.)   //
        ////////////////////////////////////////////////////////////////////////

        /* Using for loop: */
        //len_count_print_for(input);

        /* Using while loop: */
        //len_count_print_while(input);

        /* Using strlen(): */
        //len_count_print_strlen(input);

        /* Using pointers: */
        len_count_print_ptr(input);

        ////////////////////////////////////////////////////////////////////////
        //   Calling function to check if string == 'stop':                   //
        //   (Make your selection, pointer version is selected by default.)   //
        ////////////////////////////////////////////////////////////////////////

        /* Using strcmp(): */
        //retval = str_comp_strcmp(input, exit);

        /* Using pointers: */
        retval = str_comp_ptr(input, exit);

    } while(retval != 0);

    printf("You chose to stop. Bye!");

    return 0;
}

void len_count_print_for(char input[])
{
    int count = 0;
    for(int i = 0; input[i]!='\0'; i++) count++;
    printf("\"%s\" contains %d characters.\n", input, count);
}

void len_count_print_while(char input[])
{
    int count = 0;
    while(input[++count] != '\0');
    printf("\"%s\" contains %d characters.\n", input, count);
}

void len_count_print_strlen(char input[])
{
    int length = strlen(input);
    printf("\"%s\" contains %d characters.\n", input, length);
}

void len_count_print_ptr(const char * str)
{
    unsigned int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    printf("\"%s\" contains %d characters.\n", str, count);
}

int str_comp_strcmp(char input[], char exit[])
{
    return strcmp(input, exit);
}

int str_comp_ptr(const char * str1, const char * str2)
{
    while(*str1 && *str2 && (*str1 == *str2)) {
        str1++; str2++;
    }
    return *str1 - *str2;
}
