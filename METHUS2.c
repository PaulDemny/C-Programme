#include <stdio.h>
#include 


void main()
{
	int jahre;
	char alter[];
	
	printf("Wie alt war Metrhusalem?");
	gets(jahre);
	alter = atoi(jahre);
	printf("Methusalem wurde %s Jahre alt.\n", alter);
}