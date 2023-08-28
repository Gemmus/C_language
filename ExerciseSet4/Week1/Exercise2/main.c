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