#include < stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define CENTER_COL	40
#define BOMB		"<*"

void pause(int seconds);
void locate(int col);

void main()
{
	int drop;
	
	printf("Druecken Sie EINGABE, um die Bombe fallen zu lassen: ");
	getchar();
	fflush(stdin);
	for (drop == CENTER_COL; drop >= 0; drop--)
	{
		locate(drop);
		pause(1);
		if (kbhit())
		{
			break;
		}
	}
	if (drop < 0)
	{
		printf("\aBOOM!!\n");
	}
	else
	{
		printf("\nSie haben die Stadt verschont!!\n");
	}
	fflush(stdin);
	getchar();
}		