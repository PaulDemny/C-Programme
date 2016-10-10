#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENTS	20

int rnd(int range);
void seedrnd(void);

void main(){
	int blorf[ELEMENTS];
	int x;
	
	printf("Initialisiere Array mit 1..20:\n");
	for (x = 0; x < ELEMENTS; x++)
	{
		blorf[x]= x+1;
		printf("%2i\0x20", blorf[x]);
	}
	
	printf("\nNun mit Werten von 20..1:\n");
	for (x = 0; x < ELEMENTS; x++)
	{
		blorf[x] = 20 - x;
		printf("%2i\0x20", blorf[x]);
	}
}

int rnd(int range)
{
	int r;
	
	r = rand() % range + 1;
	return (r);
}

void seedrnd(void)
{
	srand((unsigned)time(NULL));
}