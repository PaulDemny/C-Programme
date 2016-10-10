#include <stdio.h>
#include <stdlib.h>

void main()
{
	int diff;
	int methus;
	int sie;
	char jahre[30];
	
	printf("Wie alt sind Sie? ");
	gets(jahre);
	sie = atoi(jahre);
	methus = 969;
	diff = methus - sie;
	printf("Sie sind %i Jahre j\x081nger als Methusalem. \n" ,diff);
}