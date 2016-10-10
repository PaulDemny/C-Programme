#include <stdio.h>
#include <ctype.h>

void main()
{
	char string[] = "Schreien Sie nicht gleich los!";
	char c = '0x20';
	int x;
	
	x = 0;
	
	puts(string);
	
	while(c != '!')
	{
		c = string[x];
		c = (char)toupper(c);
		sting[x] = c;
		x++
	}
	
	puts(string);
}