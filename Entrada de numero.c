#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese"); //acentua��o idioma
	
	int entrada;
	printf ("Entre com um n�mero: \n");
	scanf ("%d" , &entrada);      // endere�o de onde ser� alocado o n�mero.
	printf ("O n�mero digitado foi: %d\n ", entrada);
	return 0;
}
