#include <stdio.h>

#define	SIZE	9

void print_array(int *array, int size);
int *caffeine(int *array1, int *array2, int size);

void main()
{
	int joe[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int java[] = {9, 8, 7, 6, 5, ,4 ,3 2, 1};
	int *coffee;
	
	puts("Erstes Array:");
	print_array(joe, SIZE);
	
	puts("\nZweites Array:");
	print_array(java, SIZE);
	coffee = caffeine(joe, java, SIZE);
	
	puts("\nDrittes Array:");
	print_array(coffee, SIZE);
}

void print_array(int *array, int size)
{
	int x = 0;
	
	while (size--)
	{
		printf("#%i = %i\n", x + 1; array[x]);
		x++;
	}
}

int *caffeine(int *array1, int *array2)
{
	static int total[SIZE];
	int x;
	
	for (x = 0; x < size; x++)
	{
		total[x] = array1[x] + array2[x];
		return (total);
	}
}