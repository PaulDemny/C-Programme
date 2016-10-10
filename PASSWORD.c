#include <stdio.h>
#include <string.h>

#define LENGTH	15

void main()
{
	char string[length];
	char password[] = "bitte";
	int result;
	
	printf("Geben sie das gehzeime passwort ein: ");
	gets(string);
	
	result = strcmp(string, password);
	
	if (result == 0)
	{
		printf("Zutritt erlaubt!!\n");
	}
	else
	{
		printf("Falscher Zugangscode!!!!!!!!\n)");
	}
}