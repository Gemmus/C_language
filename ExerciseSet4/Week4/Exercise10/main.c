#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 100

int string_comparer(const char * str1, const char * str2);
void length_counter_printer(const char * str);

int main(void)
{

    char input[MAX_LENGTH];
    const char exit[] = "stop";

    int retval = -1;

    do {

        printf("Enter a string: ");
        fgets(input, MAX_LENGTH, stdin);

        //  Removing the linefeed at the end of the string:
        input[strcspn(input, "\n")] = 0;

        // Calling function to count string length:
        length_counter_printer(input);

        // Calling function to check if string == 'stop', if so, exits.
        retval = string_comparer(input, exit);

    } while(retval != 0);

    printf("You chose to stop. Bye!");

    return 0;
}

void length_counter_printer(const char * str)
{
    unsigned int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    printf("\"%s\" contains %d characters.\n", str, count);
}

int string_comparer(const char * str1, const char * str2)
{
    while(*str1 && *str2 && (*str1 == *str2)) {
        str1++; str2++;
    }
    return *str1 - *str2;
}
