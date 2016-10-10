#include <stdio.h>

void main()
{
	char katze[20];
	
	printf("Wie wollen Sie Ihre Katze nennen? ");
	gets(katze);
	printf("%s ist ein sch\x084ner Name. Haben Sie sonst noch eine Idee? " , katze);
	gets(katze);
	prinf("%s ist beinahe noch besser. \n");
}