/*
Write a password generator function that takes three parameters: character pointer, integer (size of
the array), a const char pointer (a word) and returns a bool. The function generates password and
stores it in the array and returns true. The length of the generated password is the
𝑙𝑒𝑛𝑔𝑡ℎ 𝑜𝑓 𝑤𝑜𝑟𝑑 × 2 + 1 characters. If the password does not fit in the string function returns false
and does not modify the string.

The password must contain the word given as a parameter so that password starts with a random
printable character and every other letter is a letter from the word and every other is a random
printable character. The password ends with a random printable character. Note that printable
characters are not limited to alphanumerical characters.

Write a program that asks user to enter a word to place in the password or to enter “stop” to stop
the program. The size of the string to read the word into must be 32. If user does not enter stop the
program generates a password using the generator function. If a password is generated successfully
the program prints it otherwise an error message is printed. Then the program asks for another
word.

For example:

User enters: metropolia
Program prints: #m%eGtqrHo&p2o+lBimaY
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_LENGTH 32
#define HIGHEST_ASCII 128

bool passwordGenerator(char *password, int size, const char *word);
char charGenerator(void);

int main(void) {

    srand(time(0));
    char word[MAX_LENGTH], password[MAX_LENGTH];
    bool retval = false, quit = false;

    while (false == quit) {
        printf("Enter a word or 'stop' to quit programme: ");
        if (fgets(word, MAX_LENGTH, stdin) == NULL) {
            fprintf(stderr, "Error reading input.\n");
            exit(EXIT_FAILURE);
        } else {
            word[strcspn(word, "\n")] = 0;
            if (strcmp(word, "stop") == 0) {
                printf("You chose to quit. Bye!");
                quit = true;
            } else {
                retval = passwordGenerator(password, MAX_LENGTH, word);
                printf("The original word: %s\n", word);
                if (true == retval) {
                    printf("The password: %s\n", password);
                } else {
                    printf("Password would exceed the maximum allowed number of characters. Password not generated.\n");
                }
            }
        }
    }
    
    return 0;
}

bool passwordGenerator(char *password, int size, const char *word) {

    int word_length = strlen(word), password_length = word_length * 2 + 1, index = 0;

    if (password_length > (size - 1)) {
        fflush(stdin);
        return false;
    } else {
        while (index < password_length + 1) {
            password[index] = charGenerator();
            password[++index] = *word;
            ++index;
            ++word;
            }
        }
        password[++index] = charGenerator();
        return true;
}

char charGenerator(void){

    char random_char;
    
    do {
        random_char = rand() % HIGHEST_ASCII;
    } while (isprint(random_char) == 0);
    
    return random_char;
}
