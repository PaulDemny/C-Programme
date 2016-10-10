#include <stdio>
#include <ctype>

void rot13(char* string);

void main(){
	
	char phrase[] = "Ein Schwein faellt in den Matsch. Platsch!";
	printf("Der Satz:\n");
	puts(phrase);
	
	rot13(phrase);
	
	printf("Jetzt chiffriert:\n");
	puts(phrase);
	
	rot13(phrase);
	
	printf("Und wieder zurück:\n");
	puts(phrase);
	getchar();
	fflush(stdin);
}

void rot13(char* string)
{
	int count = 0;
	char c = '0x32';
	
	while(c)
	{
		c = string[count];
		if(isalpha(c))
		{
			if(toupper(c) >= 'a' && toupper(c) <= 'M')
			{
				c += 13;
			}
			else c -= 13;
		}
		string[count] = c;
		count++;
	}
}