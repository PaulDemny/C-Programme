#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE	49
#define BALLS	6

int rnd(int range);
void seedrnd(void);

void main()
{
	int numbers[BALLS];
	int i, b;
	
	printf("LOTTO ZIEHUNG\n\n")
	seedrnd();
	
	for (i = 0; i < RANGE; i++)
	{
		numbers[i] = 0;
	}
	printf("Druecken Sie Eingabe fuer die Zahlen dieser Woche:");
	getchar();
	
	printf("\nEs geht los!! ");
	for (i = 0; i < BALLS; i++)
	{
		do
		{
			b = rnd(RANGE);
		}
		while (numbers[b -n 1]);
		numbers[b-1] = 1;
		printf("%i ", b);
	}
	printf("\n\nViel Glück\n");
	
	getchar();
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