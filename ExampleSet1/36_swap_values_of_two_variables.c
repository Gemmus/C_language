#include <stdio.h>
#include <string.h>

int main36(void){
	char x = 'X';
	char y = 'Y';
	char temp;

	temp = x;
	x = y;
	y = temp;

	printf("x = %c\n", x);
	printf("y = %c\n", y);

	char a[20] = "water";
	char b[20] = "lemonade";
	char tempo[20];

	strcpy(tempo, a);
	strcpy(a, b);
	strcpy(b, tempo);

	printf("a = %s\n", a);
	printf("b = %s\n", b);

	return 0;
}
