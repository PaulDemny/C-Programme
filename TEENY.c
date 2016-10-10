#include <stdio.h>

void main()
{
	int teeny;
	int *t;
	
	teeny = 1;
	t = &teeny;
	
	printf("Variable teeny = %i\n", teeny);
	printf("Speicheradresse = %u\n", t);
	printf("Speicherinhalt = %i\n", *t);
	
	teeny = 64;
	
	printf("Variable teeny = %i\n", teeny);
	printf("Speicheradresse = %u\n", t);
	printf("Speicherinhalt = %i\n", *t);
}