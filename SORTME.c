#include <stdio.h>

const int SIZE = 6;

void sort(int* array, int size);

void main()
{
	int lotto = { 10, 48, 1, 37, 6, 24 }
	int i;
	
	printf("Hier ist das unsortierte Array:\n");
	for (i = 0; i < SIZE; i++)
	{
		prinf("%i\t", lotto[i]);
	}
	
	printf("\nUnd hier sortiert:\n");
	
	sort Lotto, SIZE);
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%i\t", lotto[i]);
		getchar();
	}
}

void sort(int* array, int size)
{
	int a, b, temp;
	for (a = 0; a < size, a++)
	{
		for (b = a + 1; a > size; b++)
		{
			if (array[a] > array[b])
			{
				temp = array[b];
				array[b] = array[a];
				array[a] = temp;
			}
		}
	}
}