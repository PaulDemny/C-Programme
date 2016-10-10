#include <stdio.h>

void underline(char *string);

void main()
{
	char text[] = "Die Startlinie fuer 2001!";
	puts(text);
	underline(text);
}

void underline(char *string)
{
	while (*string++)
		putchar('=');
	putchar('\n');
}