/*
Write a C program to print alphabets from a to z using for loop.
How to print alphabets using loop in C programming.
Logic to print alphabets from a to z using for loop in C programming.
*/

#include <stdio.h>

int main(){

	for(char ch = 'a'; ch <= 'z'; ch++) printf("%c ", ch);

	//while loop:
	/*
	char ch_w= 'a';
	while(ch_w <= 'z'){
		printf("%c ", ch_w);
		ch_w++;
	}
	*/
	
	return 0;
}
