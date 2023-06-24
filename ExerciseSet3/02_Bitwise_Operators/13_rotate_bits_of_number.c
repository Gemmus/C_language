/*
Write a C program to input a number and rotate bits of number using bitwise shift operators.
How to rotate bits of a given number using bitwise operator in C programming.
Logic to left or right rotate bits of a number using bitwise shift operator in C program.

1. Input number to rotate and rotation amount from user. Store it in some variable say num and rotation.
2. Find most significant bit of the number that is about to drop and store it in some variable say DROPPED_MSB = (num >> INT_BITS) & 1.
3. Left Shift num one times and set its least significant bit to DROPPED_MSB i.e. perform num = (num << 1) | DROPPED_MSB.
4. Repeat step 2 and 3 for given number of rotations.
*/

#include <stdio.h>
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * 8 - 1

int rotateLeft(int num, unsigned int rotation);
int rotateRight(int num, unsigned int rotation);

int main()
{
    int num;
    unsigned int rotation;

    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Enter number of rotation:\n");
    scanf("%u", &rotation);

    printf("%d left rotated %u times = %d\n",  num, rotation, rotateLeft(num, rotation));
    printf("%d right rotated %u times = %d\n", num, rotation, rotateRight(num, rotation));

    return 0;
}

int rotateLeft(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while(rotation--)
        num = (num << 1) | (1 & (num >> INT_BITS));

    return num;
}

int rotateRight(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while(rotation--)
        num = ((num >> 1) & (~(1 << INT_BITS)) | ((num & 1) << INT_BITS));

    return num;
}
