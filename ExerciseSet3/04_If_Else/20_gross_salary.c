/*
Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%

Input basic salary of employee.
If basic_salary <= 10000 then, hra = basic_salary * 0.8 and da = basic_salary * 0.2.
Similarly check basic salary and compute hra and da accordingly.
Calculate final gross salary using formula gross_salary = basic_salary + da + hra.

How to calculate gross salary of an employee using if else in C programming.
Program to calculate gross salary of an employee using if else in C program.
Logic to find gross salary of employee in C program.
*/

#include <stdio.h>

int main(void){

	double basic_salary, hra, da, gross_salary;

	printf("Enter the salary: ");
	scanf("%lf", &basic_salary);

	if(basic_salary <= 10000){
		hra = basic_salary * 0.2;
		da = basic_salary * 0.8;
	}
	else if(basic_salary <= 20000){
		hra = basic_salary * 0.25;
		da = basic_salary * 0.9;
	}
	else{
		hra = basic_salary * 0.3;
		da = basic_salary * 0.95;
	}

	gross_salary = basic_salary + da + hra;
	printf("The gross salary is: %.2lf.", gross_salary);

	return 0;
 }
