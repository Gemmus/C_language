// The C program introduced in the previous exercise has been changed.
// This time, the program prompts the user for an integer and stores it in the variable x.
// The program prints the number, calls the subroutine "change_number" passing the address of the variable x as an argument, and finally prints the value of the variable x again:

/*
#include <stdio.h>

void change_number(int *x);

int main(void) {
   int x;
   printf("Enter the number x: ");
   scanf("%d", &x);
   printf("In the main program: x = %d\n", x);
   change_number(&x);
   printf("In the main program: x = %d\n", x);
}
*/

// Your task is to write the subroutine "change_number" that takes the address of the variable x,
// increases the value of the variable by three and prints the changed number as shown in the example printout.
// As you can see in the example printout, the subroutine will permanently change the value of the variable x in the main program.

#include <stdio.h>

void change_number12_2(int *x){
	*x += 3;
	printf("In the subroutine: x = %d\n", *x);
}

int main12_2(void) {

   int x;

   printf("Enter the number x: ");
   scanf("%d", &x);

   printf("In the main program: x = %d\n", x);

   change_number12_2(&x);

   printf("In the main program: x = %d\n", x);

   return 0;
}
