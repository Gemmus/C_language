/*
Write a C program to find length of a string using pointer.
*/

#include <stdio.h>
#define MAX_LENGTH 100

int main()
{
  char input[MAX_LENGTH];
  char * str = input;
  int count = 0;

  printf("Enter a string:\n");
  gets(input);
  
  while(*(str++)) count++; // or: while(*(str++) != '\0') count++;
  printf("%s contains %d characters.", input, count);

  return 0;
}
