#include <stdio.h>
#include <stdint.h>

int read_integer(void);

int main(void)
{
    int number = 0;
    int64_t total = 0;
    unsigned int count = 0;
    double average = 0.0;

    do {

        printf("Enter positive numbers or negative to stop: ");
        number = read_integer();

        if(number > 0) {
            total += number;
            count++;
        }

    } while (number >= 0);

    if (count > 0) {
        average = (double) total /count;
        printf("You entered %d positive numbers. The average is: %.3lf ", count, average);
    }
    else {
        printf("No positive numbers were entered, thus average cannot be calculated. Bye!");
    }
    return 0;
}

int read_integer(void)
{
    int number = 0;

    do{
        if (scanf("%d", &number) != 1) {
            while(getchar() != '\n');
            printf("Invalid input.\n");
        }
    }while(number == 0);

    return number;
}
