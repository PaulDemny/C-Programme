#include <stdio.h>

void main()
{
	char text[] = "Lauf! Lauf! Ist gelaufen...";
	char *t;
	
	t = text;
	
	while (*t)
	{
		puts(t);
		t++;
	}
}

