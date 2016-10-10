#include <stdio.h>

void main()
{
	int array[8];
	int *a, x;
	
	a = array;
	
	for (x = 0; x < 8; x++)
	{
		*(a+x) = x * 100;
		printf("array[%i] = %i\n", x, *(a + x));
	}
}