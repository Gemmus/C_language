/*
Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

Input unit consumed by customer in some variable say unit.
If unit consumed less or equal to 50 units. Then amt = unit * 0.50.
If unit consumed more than 50 units but less than 100 units. Then add the first 50 units amount i.e. 25 to final amount and compute the rest 50 units amount. Which is given by amt = 25 + (unit-50) * 0.75. I have used units-50, since I already calculated first 50 units which is 25.
Similarly check rest of the conditions and calculate total amount.
After calculating total amount. Calculate the surcharge amount i.e. sur_charge = total_amt * 0.20. Add surcharge amount to net amount. Which is given by net_amt = total_amt + sur_charge.

How to calculate electricity bill using if else in C programming.
Program to find electricity bill using if else in C.
Logic to find net electricity bill in C program.
*/

#include <stdio.h>

int main(void){

	double unit, amt, total_amt, sur_charge;

	printf("Enter total units consumed: ");
	scanf("%lf", &unit);

	if(unit <= 50) amt = unit * 0.50;
	else if(unit <= 150) amt = 25 + ((unit-50) * 0.75);
	else if(unit <= 250) amt = 100 + ((unit-150) * 1.20);
	else amt = 220 + ((unit-250) * 1.50);

	sur_charge = amt * 0.20;
	total_amt  = amt + sur_charge;

	printf("Electricity Bill = Rs. %.2f", total_amt);

	return 0;
 }
