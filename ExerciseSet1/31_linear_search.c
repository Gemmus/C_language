// C program to implement linear search

#include <stdio.h>
#include <stdbool.h>

int main31(void){

  int numbers[] = {6, 3, 25, 5, 13, 8, 9, 1, 4, 64, 7, 41, 2, 10, 0};
  int number;
  bool found = false;

  printf("Enter the number: ");
  scanf("%d",&number);

  int size = sizeof numbers/ sizeof numbers[0];

  for(int i = 0; i < size; i++){
    if (number == numbers[i]){
    	printf("Number found at position %d.", i);
    	found = true;
    	break;
    }
  }
  if(!found){
	  printf("Number not found.");
  }

  return 0;
}
