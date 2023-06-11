// The file "numbers.s" contains 4 integers. The numbers are on the first line of the file, separated by spaces.
// Write a program that reads the integers from the file and calculates their sum.
// Finally, the program prints the numbers and the sum on the screen.

#include <stdio.h>

int main9_2(void) {

	int total = 0;

    FILE *pF = fopen("numbers.s", "r");

    if (pF == NULL) {
       printf("Unable to open, no file.\n");
    }
    else {
       int array_of_numbers[4];

       for (int i = 0; i < 4; i++) {
     	  fscanf(pF, "%d", &array_of_numbers[i]);
       }

    printf("The numbers of the array: \n");

    for(int j = 0; j < sizeof(array_of_numbers)/sizeof(array_of_numbers[0]); j++){
	    printf("%d", array_of_numbers[j]);
	    total += array_of_numbers[j];
    }

    printf("The summary of the numbers: %d", total);

    fclose(pF);

    }

    return 0;
}
