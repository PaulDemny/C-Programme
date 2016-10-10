#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd(void);
void seedrnd(void);

void main()
{
	int x;
	
	seedrnd();
	/* 100 Zufallszahlen ausgeben */
	for (x = 0; x < 100; x++)
	{
		print("%i\t", rnd());
	}
}

int rnd(void)
{
	int r;
	
	r = rand();
	return(r);
}

void seedrnd(void)
{
	srand((unsigned)time(NULL));
}