// Write a calculator program that calculates the sum, difference or product of two integers.
// The program asks for the type of calculation first (1 = sum, 2 = difference, 3 = product).
// After calculation, the result is printed on the screen and the program returns to prompt for the next calculation.
// You should write a function for each calculation, prompting for the numbers, performing the desired calculation and printing the answer on the screen.
// The program is terminated by entering a negative number just like in the previous exercise.
// The functions carrying out the calculations and printing do not take any parameters or return any value.

#include <stdio.h>

void Addition(void){

	int num1, num2;

	printf("\nEnter first number:  ");
	scanf("%d", &num1);
	printf("Enter second number:  ");
	scanf("%d", &num2);

	printf("\n%d + %d = %d\n", num1, num2, num1 + num2);

}

void Subtraction(void){

	int num1, num2;

	printf("\nEnter first number:  ");
	scanf("%d", &num1);
	printf("Enter second number:  ");
	scanf("%d", &num2);

	printf("\n%d - %d = %d\n", num1, num2, num1 - num2);

}

void Multiplication(void){

	int num1, num2;

	printf("\nEnter first number:  ");
	scanf("%d", &num1);
	printf("Enter second number:  ");
	scanf("%d", &num2);

	printf("\n%d * %d = %d\n", num1, num2, num1 * num2);

}

int main7_2(void) {

   int operator;

   do {
      printf("\n1 = sum\n2 = difference\n3 = product\n");
      printf("End with a negative number.\n");
      printf("Select operation: ");
      scanf("%d", &operator);
      if(operator < 0) {
         printf("\nTerminating the program...");
      }
      else if(operator == 1) {
         Addition();
      }
      else if(operator == 2) {
         Subtraction();
      }
      else if(operator == 3) {
         Multiplication();
      }
      else {
         printf("\nYou entered an invalid number.\n\n");
      }
   } while(operator > 0);

   return 0;
}
