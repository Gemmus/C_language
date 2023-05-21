#include <stdio.h>

int main30(void){

	int rows;
	int columns;

	printf("\nEnter number of rows:  ");
	scanf("%d", &rows);

	printf("\nEnter number of columns:  ");
	scanf("%d", &columns);


	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= columns; j++)
		{
			printf("%d", j);
			}
		printf("\n");
		}
	return 0;
}
