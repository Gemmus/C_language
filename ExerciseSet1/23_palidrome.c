// C program to check whether a number is palindrome or not

#include <stdio.h>

int main23(void){

	int n, j, number;
	int count = 0;
	int palindrome = 1;
	int array[50];

	printf("Enter a number:  ");
	scanf("%d", &n);

	number = n;

	while(number > 0){
		array[count] = number % 10;
		number = number / 10;
		count++;
	}

	j = count - 1;

	for(int i = 0; i < j; i++){
		if(array[i] != array[j]){
			palindrome = 0;
			break;
		}
		j--;
	}

	if(palindrome == 1){
		printf("%d is palindrome number.", n);
	}
	else{
		printf("%d is not palindrome number.", n);
	}

	return 0;
}
