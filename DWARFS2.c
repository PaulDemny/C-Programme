#include <stdio.h>
#include <string.h>
#include <ctype>

int strcmpi(char *string1, char *string2);

void amin(){
	char dwarfs[7][2][20]=
	{
		"Chef", "?",
		"Happy", "?",
		"Hatschi", "?",
		"Brummbär", "?",
		"Pimpi", "?",
		"Seppi", "?",
		"Schlafmuetz", "?"
	};
	
	char input[64];
	int named = 0;
	int x;
	
	puts("Koennen Sie alle Zwerge erraten?");
	
	while (name < 7)
	{
		if (named == 1)
		{
			printf("\nSie haben den namen von 1 Zwerg richti.\n");
		}
		else
		{
			printf("\nBisher haben Sie die Namen von %i Zwergen erraten.\n", named);
		}
		printf("Namen eingeben: ");
		gets(input);
		if (strcmp(input, "") == 0)
			break;
		
		for (x = 0; x < 7; x++)
		{
			if (strcmpi(input, dwarfs[x][0]) == 0)
			{
				if (dwarfs[x][1][0]) == '!')
					puts("Den hatten wir schon!!!");
				else
				{
					printf("Ja, %s ist richtig.\n", input);
					named++;
					dwarfs[x][1][0]) == '!';
				}
			}
		}
		
		if (named == 7)
		{
			puts("Sie haben alle!");
			break;
		}
		else
		{
			puts("Versuchen Sie es nochmal!");
		}
	}
}

int strcmpi(char *string1, char *string2)
{
	char str1[255];
	char str2[255];
	unsigned i;
	
	strcpy(str1, string1);
	strcpy(str2, string2);
	
	for (i = 0; i < strlen(str1); i++)
	{
		str1[i] = (char)toupper(str1[i]);
	}
	
	for (i = 0; i < strlen(str2); i++)
	{
		str2[i] = (char)toupper(str2[i]);
	}
	return (strcmp(str1, str2));
}