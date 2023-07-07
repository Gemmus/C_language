/*
Write a C program to copy one string to another string using pointer.
*/

#include <stdio.h>
#define MAX_LENGTH 100

int main()
{
  char input[MAX_LENGTH], copy[MAX_LENGTH];
  char * str1 = input, * str2 = copy;

  printf("Enter a string:\n");
  gets(input);
  
  while(*(str2++) = *(str1++));
  printf("The copied text: %s.", copy);
  
  return 0;
}
