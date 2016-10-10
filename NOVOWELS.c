#include <stdio.h>
#include <ctype.h>

void novowels(char *string);

void main()
{
	char phrase[] = "Weg mit den Vokalen in Fredonia";
	puts("Vor der Saeuberung:\n");
	puts(phrase);
	
	novowels(phrase);
	
	puts("\nNach der Saeuberung:\n");
	puts(phrase);
}

void novowels(char *string)
{
	while (*string++)
	{
		switch (toupper(*string))
		{
			case ('A'):
				*string = '&';
				break;
			case ('E'):
				*string = '@';
				break;
			case ('I'):
				*string = '#';
				break;
			case ('O'):
				*string = '$';
				break;
			case ('U'):
				*string = '%';
				break;
			default:
				break;
		}
	}
}