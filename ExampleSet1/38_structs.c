// Struct:
// - collection of related members ('variables')
// - can be different data types
// - listed under one name in a block of memory
// - very similar to classes in other languages, but no methods

#include <stdio.h>
#include <string.h>

struct Player{
	char name[12];
	int score;
};

int main38(void){

	struct Player player1;
	struct Player player2;

	strcpy(player1.name, "Diana");
	player1.score = 4;

	printf("%s\n", player1.name);
	printf("%d\n", player1.score);

	strcpy(player2.name, "Dana");
	player2.score = 5;

	printf("%s\n", player2.name);
	printf("%d\n", player2.score);

	return 0;
}
