#include <stdio.h>

int main12_1(void){

	int num = 0;
	char stringi[100];

	do {
		printf(":  ");
		int retval = scanf("%s", stringi);
		printf("%d %s\n",retval, stringi);
		num = atoi(stringi);
		printf("%d",num);
	} while(num >= 0);

	return 0;
}
