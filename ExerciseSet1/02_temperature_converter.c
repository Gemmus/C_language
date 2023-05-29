// C program to convert the temperature in Degree Centigrade to Fahrenheit

#include <stdio.h>

int main(void){

	char unit;
	float temp;
	float result;

	printf("Enter the input unit(f/c):  ");
	scanf("%c", &unit);
	unit = tolower(unit);

	if(unit == 'f'){
		printf("Enter the temperature in Fahrenheit:  ");
		scanf("%f", &temp);
		result = (temp - 32) * 5 / 9;
		printf("The temperature in Celcius: %.2f C", result);
	}
	else if(unit == 'c'){
		printf("Enter the temperature in Celcius:  ");
		scanf("%f", &temp);
		result = 9 * temp / 5 + 32;
		printf("The temperature in Fahrenheit: %.2f F", result);
	}
	else{
		printf("Invalid unit.");
	}

	return 0;
}
