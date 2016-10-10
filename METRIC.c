#include <stdio.h>
#include <math.h>

void main()
{
	char input[20];
	double miles, kilometers;
	double *m_adresss;
	double *k_adress;
	char *i_adress;
	
	m_adress = &miles;
	k_adress = &kilometers;
	i_adress = input;
	
	printf("Geben sie einen Wert in Meilen an: ");
	miles = atof(gets(input));
	
	kilometer = miles * 1.609;
	printf("%.2f Meilen ergeben %.2f Kilometer.\n", miles, kilometers);
	
	puts("\nVariablen:");
	printf("miles hat %i Bytes an der Adresse %u\n", sizeof (miles), m_adress);
	printf("kilometers hat %i Bytes an der Adresse %u\n", sizeof (kilometers), k_adress);
	printf("input hat %i Bytes an der Adresse %u\n", sizeof (input), i_adress);
}