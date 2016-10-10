#include <stdio>

#define SIZE	8

void main()
{
	char *names[] =
	{
		"Micky",
		"Minnie",
		"Donald",
		"Daisy",
		"Goofy",
		"Tick",
		"Trick",
		"Track",
	};
	char *temp;
	int x, a, b;
	for (a = 0; a < SIZE - 1; a++)
	{
		for (b = 0; b < SIZE; b++)
		{
			x = 0;
			while (*(*(names + a) + x))
			{
				if (*(*(names + a) + x) > *(*(names + b) + x))
				{
					temp = *(names + a);
					*(names + a) = *(names + b);
					*(names + b) = temp;
				}
				else if (*(*(names + a) + x) < *(*(names + b) + x))
				{
					break;
				}
				else
				{
					x++;
				}
			}
		}
	}
	
	for (x = 0; x < SIZE; x++)
	{
		printf("%s\n", *(names + x));
	}
}