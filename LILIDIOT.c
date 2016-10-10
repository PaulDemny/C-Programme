#include <stdio.h>

void idiot(char* name);

void main()
{
	char jemand[20]
	printf("Name eines Ihnen bekannten Idioten: ");
	gets(jemand);
	idiot(jemand);
}

void idiot(char* name)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("%s ist ein Idiot\n", name);
	}
}