/*
Write a C program to concatenate two strings in single string using pointer. 
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
  char input1[MAX_LENGTH], input2[MAX_LENGTH];
  char * str1 = input1, * str2 = input2;

  printf("Enter first string:\n");
  gets(input1);

  printf("Enter second string:\n");
  gets(input2);

  while(*(++str1));
  while(*(str1++) = *(str2++));
  printf("Concatenated string = %s\n", input1);
  
  return 0;
}
