#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	char trab [40];
	
	printf ("Entre com seu nome completo: \n");
	
	scanf ("%s", &trab);
	
	printf ("\nO nome entrado é %s\n", trab);
	
	return 0;
}
