#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	struct st_info
	{
		int number, 
		char name[30];
		char description[30];
	};
	
	struct st_info *episode;
	
	puts("Meine Datenbank:");
	
	episode = (st_info*)malloc(sizeof(struct st_info));
	
	if (episode == NULL)
	{
		puts("Es ist kein Speicher mehr frei");
		exit(0);
	}
	
	episode -> number = 29;
	strcpy(episode -> name, "Operation Annihilate!");
	strcpy(episode -> description, "WWWWWWWAAAAAAASSSS!!!");
	free(episode);
} 