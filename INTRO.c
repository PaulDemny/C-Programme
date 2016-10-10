#include <stdio.h>
#include <string.h>

void main()
{
	char name[25];
	char first[25];
	char space = " ";
	int pos;
	
	printf("Ihr vor- und Nachname? ");
	gets(name);
	pos = strcspn(name, space);
	strncpy(first, name, pos);
	first[pos] = '\0';
	
	printf("Hallo %s, nett Sie zu treffen.\nj", name);
	printf("Oder darf ich %s sagen?\n", first);
}