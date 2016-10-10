#include <stdio.h>
#include <stdlib.h>

void main()
{
	char input [10];
	
	struct stuff
	{
		char c;
		int n;
	};
	
	struct stuff mystuff;
	
	puts("Ihre Daten");
	
	printf("Geben sie Ihren Lieblingsbuchstaben ein: ");
	mystuff.c = getchar();
	fflush(stdin);
	
	printf("Geben Sie Ihre Lieblingszahl ein: ");
	mystuff.n = getchar();
	fflush(stdin);
	
	printf("Okay. Ihr Lieblingsbuchstabe ist %c\n", mystuff.c);
	printf("und Ihre Lieblingszahl ist %i.\n", mystuff.n);
}