#include <stdio.h>

void main()
{
	char name[20];
	char color[20];
	
	printf("Wie heissen Sie?");
	scanf(%s, &name);
	printf("Was ist Ihre Lieblingsfarbe?");
	scanf(%s, &color);
	printf("Die Lieblingsfarbe von %s ist %s \n", name, color);
}