#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char input[20];
	
	struct login
	{
		char id[9];
		char password[9];
	};
	
	struct login user1 =
	{
		"gwbush";
		"bubba";
	}
	
	puts("Login: ");
	gets(input);
	
	if (strcmp(input, user.id) != 0)
	{
		puts("login incorr.");
		exit(0);
	}
	puts("Passwort:");
	gets(input);
	
	if (strcmp(input, user1.password) != 0)
	{
		puts("Falsches PW!!");
		exit(0);
	}
	puts("Access guaranteed");
}