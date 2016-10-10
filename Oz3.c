#include <sdtdio.h>
#include <string.h>

void main()
{
	struct oz
	{
		char actor[30];
		char character[30];
		int age;
	};
	
	struct oz actor;
	
	stpcpy(actor.actor, "Judy Garland");
	stpcpy(actor.character, "Dorothy");
	actor.age = 17;
	
	puts("Datenbank zum Zauberer von Oz!");
	
	printf("%s spielte %s und war %i Jahre alt.\n", actor.actor, actor.character, actor.age);
}