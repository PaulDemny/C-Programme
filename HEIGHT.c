#include <stdio.h>
#include <stdlib.h>

void main()
{
	float groesse_in_zoll;
	char groesse_in_cm;
	
	printf("Ihre Koerpergroesse in cm :");
	gets(groesse_in_cm);
	groesse_in_zoll = groesse_in_cm / 2.54;
	printf("Sie sind %.f Zoll gross. \n", groesse_in_zoll);
}