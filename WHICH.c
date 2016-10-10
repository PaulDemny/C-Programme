 #include <stdio.h>
 
 void main()
 {
	 char key;
	 
	 printf("Druecken Sie eine Taste :");
	 key = getchar();
	 printf("Sie haben die Taste '%s' gedrueckt. \n", key);
	 printf("Der ASCII - Wert ist %i. \n", key);
 }