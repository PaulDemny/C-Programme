#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	char input[10];
	
	struct stuff
	{
		char c;
		int n;
	} mystuff, hisstuff;
	
	hisstuff.c = 'Y';
	hisstuff.n = 199;
	
	puts("Ihre Daten:");
	
	printf("Geben Sie Ihren Lieblingsbuchstaben ein: ");
	mystuff.c = (char)getchar();
	fflush(stdin);
	
	printf("Geben Sie Ihre Lieblingszahl ein: ");
	mystuff.n = atoi(gets(input));
}