// C program to find the largest number in an array without using built-in functions

#include <stdio.h>

int main21() {

  int numbers[] = {23, 58, 12, 9, 74, 28, 34, 63, 86, 47};
  int size = sizeof(numbers)/sizeof(numbers[0]);
  int largest = 0;

  for(int i = 0; i < size; i++){
	  if(largest < numbers[i]) largest = numbers[i];
  }

  printf("The largest number of the array is: %d.", largest);

  return 0;
}
