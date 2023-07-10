/*
Write a C program to define, undefine and redefine a macro (compile time constant). 
How to define, remove and redefine a macro in C programming. 
How to define, remove and redefine a compile time constant (macro) in C programming.
*/

#include <stdio.h>
// Define:
#define PI 3.14

int main()
{
    printf("Value of PI: %f\n", PI);

    // Undefine:
    #ifdef PI
    #undef PI
    #endif

    // Redefine:
    #define PI 3.14159

    printf("Value of PI after redefinition: %f", PI);
    
    return 0;
}
