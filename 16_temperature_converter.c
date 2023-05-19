#include <stdio.h>
#include <ctype.h>

int main16(void) {

	char unit;
	float temperature;


	printf("Is the temperature in (F) or (C)?:  ");
	scanf("%c", &unit);

	unit = toupper(unit);

	if (unit == 'C') {
		printf("\nEnter the temperature in Celsius:  ");
		scanf("%f", &temperature);
		temperature = (temperature * 9 / 5) + 32;
		printf("The temperature in Farenheit is: %.1f", temperature);
	}
	else if (unit == 'F') {
		printf("\nEnter the temperature in Fahrenheit:  ");
		scanf("%f", &temperature);
		temperature = (temperature - 32) * 5 / 9;
		printf("The temperature in Celsius is: %.1f", temperature);
	}
	else {
		printf("%c is not valid. Please enter a valid unit", unit);
	}

	return 0;

}
