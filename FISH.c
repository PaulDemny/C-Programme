#include  <stdio.h>

void main()
{
	char string[] = "Darf man wirklich so riechen?";
	char *s;
	
	s = string;
	
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}