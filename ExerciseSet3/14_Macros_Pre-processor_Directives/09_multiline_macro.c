/*
How to write multi-line macro in C programming language.
We generally define macros that spans over single line.
However there exists situations when you want to define a macro that spans over multiple line.
*/

#include <stdio.h>
#define EVEN_ODD(num)              	 \
    if (num & 1)                   	 \
        printf("%d is odd.\n", num); \
    else                           	 \
        printf("%d is even.\n", num);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    EVEN_ODD(num);

    return 0;
}
