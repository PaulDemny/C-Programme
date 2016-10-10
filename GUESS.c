#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Ratebereich
const int RANGE = 100;
//Rateversuche
const int TRIES = 6;

int rnd(int range);
void seedrnd(void);

void main()
{
	int guessme, guess, t;
	
	seedrnd();//Startwert
	guessme = rnd(RANGE); //diese Zahl erraten
	
	printf("RATE?! \nRate die Zufallszahl.\n");
	printf("Ich denke an eine Zahl zwischen 1 und %i.\n", RANGE);
	printf("Du hast %i Versuche", TRIES);
	
	for (t = 0; t <= TRIES; t++)
	{
		printf("Versuch #%i:", t);
		scanf(%i, &guess);
	}
	
	if (guess == guessme)
	{
		printf("Du hast es erraten!"\n);
		break;
	}
	else if (guess > guessme)
	{
		printf("Zu hoch!");
	}
	else
	{
		printf("Zu niedrieg!");
	}
	printf("Die Zahl war %i.\n", guessme);
}

int rnd(int range)
{
	int r;
	r = rand()range + 1;
	return (r);
}

void seedrnd(void)
{
	srand((unsigned)time(NULL));;
}