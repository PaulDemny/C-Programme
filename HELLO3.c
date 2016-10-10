#include <stdio.h>
#include <conio.h>

void main()
{
	for(;;)
	{
		printf("Hallo, Welt!%c", '\0x20');
		if(kbhit())
		{
			break;
		}
		fflush(stdin);
	}
}