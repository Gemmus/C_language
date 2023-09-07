/*
Write a program that defines two floating-point arrays of 12 elements each. The program then asks
user to enter tax percentage and yearly income limit up to which the percentage applies to and the
(greater) tax percentage that will be applied to income that is over the limit. Then program asks user
to enter salary of each month and stores the values in the array. After user has entered all monthly
salaries, the program calculates tax for each month.
The program prints all salaries with two decimal precision and the amount of tax for each month.

Example: (three dots indicates rows not shown in this example):
Enter tax rate: 18.0
Enter income limit: 10000
Enter tax rate for income over the limit: 36.0
Enter income for month 1: 998
...
Enter income for month 6: 1489.51
...
Enter income for month 12: 998
month income tax
 1 998.00 179.64
 2 998.00 179.64
...
 6 1489.51 268.11
...
 12 998.00 359.28

You need to get familiar with printf field width specifiers to complete this!
Note that decimal points must be aligned as shown above!
The tricky part is the month where (if) the total income goes over the limit. That month part of salary
is taxed with lower rate and part of the salary with higher rate.
*/

#include <stdio.h>
#define MAX_SIZE 12

int main(void)
{
    double tax_rate = 0, income_limit = 0, excessive_tax_rate = 0, old_total = 0, new_total = 0;
    double income_array[MAX_SIZE], tax_array[MAX_SIZE];
    int reached_limit = 0;

    printf("Enter tax rate: ");
    scanf("%lf", &tax_rate);

    printf("Enter income limit: ");
    scanf("%lf", &income_limit);

    printf("Enter tax rate for income over the limit: ");
    scanf("%lf", &excessive_tax_rate);

    for(int i = 0; i < MAX_SIZE; i++) {
        printf("Enter the income for month %d: ", i + 1);
        scanf("%lf", &income_array[i]);
        new_total += income_array[i];
        if (new_total <= income_limit) {
            tax_array[i] = income_array[i] * tax_rate / 100;
        }
        else {
            if (reached_limit == 0){
                tax_array[i] = ((income_limit - old_total) * tax_rate + (new_total - income_limit) * excessive_tax_rate) / 100;
                reached_limit = 1;
            }
            else {
                tax_array[i] = income_array[i] * excessive_tax_rate / 100;
            }
        }
        old_total = new_total;
    }

    printf("\nmonth      income         tax\n");

    for(int j = 0; j < MAX_SIZE; j++) {
        printf(" %4d %11.2f %11.2f\n", j + 1, income_array[j], tax_array[j]);
    }

    return 0;
}
