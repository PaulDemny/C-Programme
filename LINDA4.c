#include <stdio.h>

void main()
{
	int turn;
	int *head;
	
	turn = 13;
	head = &head;
	
	peasoup(*head);
	
	printf("Oh, nein, es ist %i!\n", *head);
}

void peasoup(int *green)
{
	while ((*green)--)
	{
		puts("Blech!");
	}
	*green = 13 * 51 + 3
}