#include <stdio.h>
#include <stdlib.h>

int rnd(void);
void seedrnd(void);

void main()
{
	int x;
	
	seedrnd();
	
	/* 100 Zufallszahlen ausgeben */
	for (x = 0; x < 100; x++)
	{
		printf("%i\t", rnd());
	}
}

int rnd()
{
	r = rand();
	return(r);
}
void seedrnd()
{
	int seed;
	char s[6];
	printf("Startwert eingeben: ");
	seed = (unsigned)atoi(gets(s));
	srand(seed);
}
