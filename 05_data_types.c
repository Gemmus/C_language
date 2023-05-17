#include <stdio.h>
#include <stdbool.h>

int main(void){
	// single character %c
	char c = 'C';
	printf("Character: C%c\n", c);

	// array of characters %s
	char a[] = "Bro";
	printf("Array of character: %s\n", a);


	// 4 bytes (32bits of precision) 6 - 7 digits %f
	float f = 3.141592653589793;
	printf("Float: %0.15f\n", f);

	// 8 bytes (64 bits of precision) 15 - 16 digits %lf
	double lf = 3.141592653589793;
	printf("Double: %0.15lf\n", lf);


	// 1 byte (true or false) %d
	bool d = true;
	printf("Boolean: %d\n", d);


	// 1 byte (-128  or +127) %d or %c
	char d_or_c = 100;
	printf("Char as numeric value: %d\n", d_or_c);
	printf("Char as character value: %c\n", d_or_c); // prints a d, needs ASCII to convert

	// 1 byte (0 to +255) %d or %c
	unsigned char c_or_d = 255;
	printf("Unsigned char as numeric value: %d\n", c_or_d);
	printf("Unsigned char as character value: %c\n", c_or_d); // needs ASCII to convert


	// 2 bytes (-32,768 to +32,767) %d
	short i = 32767; // or short int i
	printf("Short integer: %d\n", i);

	// 2 bytes (0 to +65,535) %d
	unsigned short u_i = 65535;
	printf("Unsigned short integer: %d\n", u_i);

	// 4 bytes (-2,147,483,648 to +2,147,483,647) %d
	int j = 2147483647;
	printf("Integer: %d\n", j);

	// 4 bytes (0 to 4294967295) %u
	unsigned int k = 4294967295;
	printf("Unsigned integer: %u\n", k);

	// 8 bytes (-9 quintillion to +9 quintillion) %lld
	long long int l = 9223372036854775807;
	printf("Long long integer: %lld\n", l);

	// 8 bytes (0 to +18 quintillion) %llu
	unsigned long long int m = 18446744073709551615U;
	printf("Unsigned long long integer: %llu\n", m);

	return 0;
}
