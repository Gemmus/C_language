// ternary operator = shortcut to if/else when assigning/returning a value

#include <stdio.h>

int findMax24(int x, int y) {
/*	if(x >y)
	{
		return x;
	}
	else {
		return y;
	}*/
	return (x > y) ? x : y; 	// (condition) ? value if true : value if false
}

int main24(void) {

	int max = findMax24(5, 4);

	printf("%d", max);

	return 0;
}
