#include <stdio.h>

void main()
{
	char string[] = "Darf man wirklich so reichen?";
	char *s;
	
	s = string;
	
	while(putchar(*s++));
}