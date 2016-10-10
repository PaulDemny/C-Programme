#include <stdio.h>

void main()
{
	int rn[] = {1, 5, 10, 50, 100, 1000};
	int *r;
	int x;
	
	for (x = 0; x < 6; x++)
	{
		r = rn;
		printf("%i. %u = %i\n", x + 1, r, rn[x]);
		r++;
	}
}