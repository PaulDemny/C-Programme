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
	for (a = 0; a < SIZE - 1; x++)
	{
		for (b = 0; b < SIZE; b++)
		{
			if (**(names + a) > **(names + b))
			{
				temp = *(names + a);
				*(names + a) = *(names + b);
				*(names + b) = temp;
			}
		}
	}
	
	for (x = 0; x < SIZE; x++)
	{
		printf("%s\n", names[x]);
	}
}