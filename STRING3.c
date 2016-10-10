#include <stdio>

void main()
{
	char *t = "Lauf! Lauf! Ist gelaufen...";
	
	while(*t)
	{
		puts(*t);
		t++;
	}
}